#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
#define MAXN  1100
#define MAXM  1100
int n,m,tab[MAXN][MAXM],dist[MAXN][MAXM];
int xi,yi,xf,yf;
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int bfs(){
    queue<pair<int,int> > fila;
    fila.push(make_pair(xi,yi));
    while(!fila.empty()){
        int atualx=fila.front().first;
        int atualy=fila.front().second;
        fila.pop();
        for(int i=0;i<4;i++){
            int a=dx[i]+atualx;
            int b=dy[i]+atualy;

            if(a>0 and a<=n and b>0 and b<=m and dist[a][b]==-1 and tab[a][b]==1 or tab[a][b]==3){
                dist[a][b]=dist[atualx][atualy]+1;
                fila.push(make_pair(a,b));

            }
        }

    }

}
int main(){
    cin>>n>>m;
    memset(dist,-1,sizeof(dist));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>tab[i][j];
            if(tab[i][j]==2){
                xi=i;
                yi=j;

            }
            if(tab[i][j]==3){
                xf=i;
                yf=j;

            }
        }

    }
    dist[xi][yi]=0;
        bfs();

    cout<<dist[xf][yf]+1<<endl;


}
