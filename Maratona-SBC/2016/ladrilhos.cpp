#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
int tab[220][220],dx[4]={0,-1,0,1},dy[4]={-1,0,1,0},componente[220][220];
int h,l;
int dfs(int i , int j,int aux){
    componente[i][j]=aux;
    for(int k=0;k<4;k++){
        int x=dx[k]+i,y=dy[k]+j;
        if(x>=0 and x<h and y>=0 and y<l){
            if(tab[x][y]==tab[i][j] and componente[x][y]==0){
                dfs(x,y,aux);
            }
        }
    }


}
int sedererrado[40000];
int conta(int i,int j){
    int cont=1;
    componente[i][j]=1;
    for(int k=0;k<4;k++){
        int x=dx[k]+i,y=dy[k]+j;
        if(x>=0 and x<h and y>=0 and y<l){
            if(tab[x][y]==tab[i][j]and componente[x][y]==0){
                cont+=conta(x,y);
            }
        }

    }
    return cont;

}

int main(){

    memset(tab,-1,sizeof(tab));
    memset(componente,0,sizeof(componente));
    cin>>h>>l;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            cin>>tab[i][j];
        }

    }
    int cont=1;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            if(componente[i][j]==0){
                dfs(i,j,cont);
                cont++;
            }
        }
    }

    memset(componente,0,sizeof(componente));
    int menor=INT_MAX;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            if(componente[i][j]==0){
            cont=conta(i,j);
            if(cont<menor){
                menor=cont;
            }
            }
        }
    }
    cout<<menor<<endl;


}
