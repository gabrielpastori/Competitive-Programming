#include <iostream>
#include <cstring>
using namespace std;
int mat[10][10],viz[10][10];
void atualiza(int i,int j){
    mat[i][j]=0;
    viz[i][j]=0;

    viz[i-1][j]--;
    viz[i][j+1]--;
    viz[i+1][j]--;
    viz[i][j-1]--;

}
int main(){
    int l,c,p,x,y;
    cin>>l>>c;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>x>>y;
        mat[x][y]=2;
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            if(mat[i][j]==0 and (mat[i-1][j]==2 or mat[i][j+1]==2 or mat[i+1][j]==2 or mat[i][j-1]==2)){
                mat[i][j]=1;
            }
        }
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            if(mat[i][j]==1 and mat[i][j+1]==1){
                viz[i][j]++;
                viz[i][j+1]++;
            }
            if(mat[i][j]==1 and mat[i+1][j]==1){
                viz[i][j]++;
                viz[i+1][j]++;
            }
        }
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            if(mat[i][j]==1 and mat[i][j+1]==1){
                if(viz[i][j]>=viz[i][j+1]){
                    atualiza(i,j);
                }else{
                    atualiza(i,j+1);
                }
            }
            if(mat[i][j]==1 and mat[i+1][j]==1){
                if(viz[i][j]>=viz[i+1][j]){
                    atualiza(i,j);
                }else{
                    atualiza(i+1,j);
                }
            }
        }
    }
    int soma=0;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=c;j++){
            if(mat[i][j]==1) soma++;
        }
    }
    cout<<soma<<endl;
}