#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
#define MAXN 110
#define INFINITO 999999
int main(){
	int n,m,adj[MAXN][MAXN];
	cin>>n>>m;
	int u,v,w;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) adj[i][j]=0;
			else adj[i][j]=INFINITO;
		}

	}
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		adj[u][v]=w;
		adj[v][u]=w;

	}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				adj[i][j]= min(adj[i][j],adj[i][k]+adj[k][j]);

			}
		}
	}
	int min=INT_MAX,cont=0;
	for(int i=0;i<n;i++){
		cont=0;
		for(int j=0;j<n;j++){
			if(adj[i][j]>cont) cont=adj[i][j];

		}
		if(cont<min) min=cont;
	}
	
	cout<<min<<endl;

}
