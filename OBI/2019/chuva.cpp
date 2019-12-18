#include <iostream>

using namespace std;
#define MAXN 600
char mat[MAXN][MAXN];
int visitado[MAXN][MAXN];
int dx[4]={0,1,0},dy[4]={1,0,-1};
int n,m;
void dfs(int x,int y){
    
    visitado[x][y]=1;
    if(mat[x][y]=='.'){
        
        if(mat[x-1][y]=='o' or (mat[x][y-1]=='o' and mat[x+1][y-1]=='#') or (mat[x][y+1]=='o' and mat[x+1][y+1]=='#')){
            
            mat[x][y]='o';

        }
    }
    if(mat[x][y]=='o'){
        
        for(int i=0;i<3;i++){
            int a=dx[i]+x;
            int b=dy[i]+y;
            
            if(a<1 or a>=(n+1) or b<1 or b>=(m+1)) continue;
            
            if(!visitado[a][b] or mat[a][b]=='.'){
                
                dfs(a,b);
            }
        }
    }
}
int main(){
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>mat[i][j];
            visitado[i][j]=0;
        }
    }
    for(int j=0;j<=(m+1);j++){
        mat[0][j]='.';
        mat[n+1][j]='.';
    }
    for(int i=0;i<=(n+1);i++){
        mat[i][0]='.';
        mat[i][m+1]='.';
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            
            if(mat[i][j]=='o' and !visitado[i][j]){
                
                dfs(i,j);
            }
        }
    }
    
    
    
    for(int i=1;i<=(n);i++){
        for(int j=1;j<=(m);j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
