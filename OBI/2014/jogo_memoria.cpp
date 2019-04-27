#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAXL    20
#define MAXN 50500


int n;
int c[MAXN];
int par[MAXN];


int pai[MAXN];
int nivel[MAXN];
int ancestral[MAXN][MAXL];


vector<int> lista[MAXN];

void dfs(int u){
	
	for(int i = 0;i < (int)lista[u].size();i++){
		int v = lista[u][i];
		
		if(nivel[v] == -1){
			pai[v] = u;
			nivel[v] = nivel[u]+1;
			
			dfs(v);
		}
	}
	
}

int LCA(int u, int v){
	
	if(nivel[u] < nivel[v]) swap(u, v);
	
	for(int i = MAXL-1;i >= 0;i--)
		if(nivel[u] - (1<<i) >= nivel[v])
			u = ancestral[u][i];
	
	if(u == v) return u;
	
	for(int i = MAXL-1;i >= 0;i--)
		if(ancestral[u][i] != -1 && ancestral[u][i] != ancestral[v][i]){
			u = ancestral[u][i];
			v = ancestral[v][i];
		}
			
	return pai[u];
}

int main(){
	
	cin >> n;
	vector<int> o[MAXN];
	for(int i = 1;i <= n;i++){
		int k;
		cin>>k;
		o[k].push_back(i);
	}
	
	for(int i = 1;i < n;i++){
		int a, b;
		cin >> a >> b;
		
		lista[a].push_back(b);
		lista[b].push_back(a);
	}
	
	for(int i = 0;i < MAXN;i++) pai[i] = nivel[i] = -1;

	for(int i = 0;i < MAXN;i++)
		for(int j = 0;j < MAXL;j++)
			ancestral[i][j] = -1;
	
	nivel[1] = 0;
	dfs(1);
	
	for(int i = 1;i <= n;i++) ancestral[i][0] = pai[i];
	
	for(int j = 1;j < MAXL;j++)
		for(int i = 1;i <=   n;i++)
			ancestral[i][j] = ancestral[ ancestral[i][j-1] ][j-1];
	
	long long resposta = 0LL;
	for(int i = 1;i <= n/2;i++){
	
		resposta += (long long)( nivel[o[i][0]] + nivel[o[i][1]] - 2*nivel[ LCA(o[i][0],o[i][1]) ]);
	}
	
	cout << resposta << endl;
	
	return 0;
}
