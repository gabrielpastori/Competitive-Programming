#include <iostream>
#include <vector>
using namespace std;
#define MAXN 100100
#define MAXL 20
vector<pair<int,int> > v[MAXN];
long long int pai[MAXN],ancestral[MAXN][MAXL],nivel[MAXN],dist[MAXN];
int dfs(int x){
	for(int i=0;i<v[x].size();i++){
		long long int p=v[x][i].first;
		if(nivel[p]==-1){
			nivel[p]=nivel[x]+1;
			pai[p]=x;
			dist[p]=dist[x]+v[x][i].second;
			dfs(p);
		}

	}

}
int lca(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	for(int i=MAXL-1;i>=0;i--){
		if((nivel[u]-(1<<i))>=nivel[v]){
			u=ancestral[u][i];

		}
	}
	if(u==v) return u;

	for(int i=MAXL-1;i>=0;i--){
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i]){
			u=ancestral[u][i];
			v=ancestral[v][i];

		}

	}
	return pai[u];

}
int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	long long int n;
	while(cin>>n){
		if(n==0) break;
	long long int a,l;
	for(int i=0;i<n;i++) pai[i]=nivel[i]=dist[i]=-1;
	for(int i=0;i<n;i++){
		v[i].clear();
		for(int j=0;j<MAXL;j++){
			ancestral[i][j]=-1;

		}
	}
	for(int i=1;i<n;i++){
		cin>>a>>l;
		v[i].push_back(make_pair(a,l));
		v[a].push_back(make_pair(i,l));

	}
	
	pai[0]=0;
	nivel[0]=0;
	dist[0]=0;
	dfs(0);
	for(int i=0;i<n;i++){
		ancestral[i][0]=pai[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<MAXL;j++){
			ancestral[i][j]=ancestral[ancestral[i][j-1]][j-1];
		}
	}



	int q;
	cin>>q;
	int s,t;
	for(int i=0;i<q;i++){
		cin>>s>>t;
		cout<<dist[s]+dist[t]-2*dist[lca(s,t)];
		if(i<(q-1)) cout<<" ";
	}
	cout<<endl;
	}

}
