#include <iostream>
using namespace std;
#define MAXN 600
int mat[MAXN][MAXN];
bool vis[MAXN][MAXN];
char res[MAXN][MAXN];
int n,f;
void dfs(int a,int b){
    vis[a][b]=1;
    if((a-1)>=0){
        if(mat[a-1][b]<=f and !vis[a-1][b]){
            res[a-1][b]='*';
            dfs(a-1,b);
        }
    }
    if((a+1)<n){
        if(mat[a+1][b]<=f and !vis[a+1][b]){
            res[a+1][b]='*';
            dfs(a+1,b);
        }
    }
    if((b-1)>=0){
        if(mat[a][b-1]<=f and !vis[a][b-1]){
            res[a][b-1]='*';
            dfs(a,b-1);
        }
    }
    if((b+1)<n){
        if(mat[a][b+1]<=f and !vis[a][b+1]){
            res[a][b+1]='*';
            dfs(a,b+1);
        }
    }
}
int main(){
    
    cin>>n>>f;
    string aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        for(int j=0;j<n;j++){
            mat[i][j]=aux[j]-48;
            res[i][j]=aux[j];
            vis[i][j]=0;
        }
    }
    
    if(mat[0][0]<=f) {
        dfs(0,0);
        res[0][0]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}