#include <iostream>
#include <vector>
#include  <algorithm>
#include <cstring>
using namespace std;
#define MAXN 110
int dx[4]={0,1,0,-1},cont=0,dy[4]={1,0,-1,0},n,seted[MAXN][MAXN],tab[MAXN][MAXN];
int dfs(int x,int y){
    seted[x][y]=1;
    for(int i=0;i<4;i++){
        int a=x+dx[i];
        int b=y+dy[i];
        if(a>0 and a<=n and b>0 and b<=n){
            if(tab[a][b]>=tab[x][y] and seted[a][b]==0){
                cont+=1;
                dfs(a,b);

            }

        }

    }


}
int main(){
    cin>>n;
    int l,m;
    cin>>l>>m;
    for(int i=1;i<=n;i++){
        for (int j = 1; j <=n; j++){
            cin>>tab[i][j];
            seted[i][j]=0;
        }

    }
    dfs(l,m);
    cout<<cont+1<<endl;


}
