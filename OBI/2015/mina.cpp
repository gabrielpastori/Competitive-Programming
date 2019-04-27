#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
using namespace std;
#define MAXN 110
#define INFINITO 999999999
typedef pair<int,pair<int,int> > pii;
int processado[MAXN][MAXN];
int dist[MAXN][MAXN];
int n,tab[MAXN][MAXN];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
void Djikstra(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dist[i][j]=INFINITO;

		}

	}
	dist[1][1]=0;
	priority_queue<pii,vector<pii>,greater<pii> > fila;
    pii aux;
    aux.first=dist[1][1];
    aux.second.first=1;
    aux.second.second=1;
    fila.push(aux);
    
    while(true){
        pair<int,int> davez;
        davez.first=-1;            
        davez.second=-1;
        int menor=INFINITO;
        while(!fila.empty()){
	    pair<int,int > atual;
        atual.first=fila.top().second.first;
        atual.second=fila.top().second.second;
	    fila.pop();
		if(!processado[atual.first][atual.second]){
	       	davez=atual;
		    break;

        }
	}
    processado[davez.first][davez.second]=true;
	if(davez.first==-1 and davez.second==-1){
		break;
	}
	for(int i=0;i<4;i++){
		int a=dx[i]+davez.first;
		int b=dy[i]+davez.second;
		int distancia=tab[a][b];
		if(dist[a][b]>dist[davez.first][davez.second]+distancia){
			dist[a][b]=dist[davez.first][davez.second]+distancia;
            pair<int,int> ax;
            ax.first=a;
            ax.second=b;
            aux.first=dist[a][b];
            aux.second=ax;
			fila.push(aux);
		}
	}
}

}
int main(){
    cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>tab[i][j];

		}
	}
    Djikstra();
	cout<<dist[n][n]<<endl;

}
