// program for OBI training
#include <iostream>
#include <cstring>
#define MAXN 110
using namespace std;
char mat[MAXN][MAXN];
int mn[MAXN][MAXN];

int n,m,k;
void dfs(int x,int y,int cont){
    mn[x][y]=cont;
    if(x>0 and x<=n and y>0 and y<=m){
        if(mat[x-1][y]=='#' and mn[x-1][y]==0) dfs(x-1,y,cont);
        if(mat[x+1][y]=='#' and mn[x+1][y]==0) dfs(x+1,y,cont);
        if(mat[x][y-1]=='#' and mn[x][y-1]==0) dfs(x,y-1,cont);
        if(mat[x][y+1]=='#' and mn[x][y+1]==0) dfs(x,y+1,cont);
    }
}
int main()
{
    memset(mn,0,sizeof(mn));
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
        }
        
        
    }
    int cont=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(mat[i][j]=='#' and mn[i][j]==0){
                dfs(i,j,cont);
                cont++;
            }
        }
    } 
    
    cin>>k;
    int a,b;
    
    for(int i=0;i<k;i++){
        cin>>a>>b;
        mn[a][b]=0;
    }
    
    bool count[20100];

    memset(count,0,sizeof(count));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            count[mn[i][j]]=1;
        }
    }
    int res=0;
    for(int i=1;i<=20000;i++){
        if(count[i]==1) res++;    
    }
    cout<<cont-res-1<<endl;
}
