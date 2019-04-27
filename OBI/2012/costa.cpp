#include <iostream>
#include <vector>
#include <algorithm>
#define MAXN 1100
using namespace std;

int main(){
    int m,n,cont=0;
    cin>>m>>n;
    char vet[MAXN][MAXN];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>vet[i][j];
        }
    }
    for(int i=0;i<=n+1;i++){
        vet[0][i]='.';
        vet[m+1][i]='.';
    }
    for(int i=0;i<=m+1;i++){
        vet[i][0]='.';
        vet[i][n+1]='.';
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(vet[i][j]=='#' and (vet[i-1][j]=='.' or vet[i][j-1] =='.' or vet[i+1][j]=='.' or vet[i][j+1]=='.')){
                cont+=1;
            }
        }
    }
    cout<<cont<<endl;



}
