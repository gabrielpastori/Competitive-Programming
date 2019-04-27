#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
#define MAXS 300
#define INFINITO 999999
int main(){
	int c,n,a,b,d,dist[MAXS][MAXS];
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) dist[i][j]=0;
			else dist[i][j]=INFINITO;
		}
	}
	for(int i=0;i<c;i++){
		cin>>a>>b>>d;
		dist[a][b]=d;
		dist[b][a]=d;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[j][k]);
			}
		}
	}
	int mini=INFINITO,cont=0;
	for(int i=1;i<=n;i++){
		cont=0;
		for(int j=1;j<=n;j++){
			if(dist[i][j]>cont) cont=dist[i][j];

		}
		mini=min(cont,mini);
	}
	cout<<mini<<endl;
}
