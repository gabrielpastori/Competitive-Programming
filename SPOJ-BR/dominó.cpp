#include <iostream>
#include <vector>
#include <cstring>
#include <map>
using namespace std;
#define MAXN 110
int grau[10];
int m[15][15];
int viz[10];
vector<int> v[10];
int dfs(int x){
	grau[x]--;
	for(int i=0;i<v[x].size();i++){
		int a=x;
		int b=v[x][i];
		if(m[a][b]==0) continue;
		m[a][b]--;
		m[b][a]--;
		dfs(b);
 
	}
 
}
int main(){
	int n,a,b,x,r=1;
	while(cin>>n){
	if(n==0) break;
 
	string resp="sim";
	
	memset(viz,0,sizeof(viz));
	memset(grau,0,sizeof(grau));
	memset(m,0,sizeof(m));
	for(int i=0;i<n;i++){
		cin>>a>>b;
		x=a;
		viz[a]=1;
		viz[b]=1;
		grau[a]+=1;
		grau[b]+=1;
		m[a][b]+=1;
		m[b][a]+=1;
		v[a].push_back(b);
		v[b].push_back(a);
		
	}
	int cont=0;
	for(int i=0;i<=6;i++){
		if(grau[i]%2!=0){
			cont++;
			x=i;
		}
 
	}
	if(cont>2) resp="nao";
	dfs(x);
	for(int i=0;i<=6;i++){
		for(int j=0;j<=6;j++){
			if(m[i][j]!=0){
				resp="nao";
				break;
			}
		}
		
 
	}	
 
	cout<<"Teste "<<r<<endl;
	cout<<resp<<endl;
	cout<<endl;
	r++;
	}
} 