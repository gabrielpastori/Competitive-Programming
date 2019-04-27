#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 2100
long long int peso[MAXN],valor[MAXN],tab[MAXN][MAXN];
int p,n;
int knapsack(int obj,int aguenta){
        if(obj==n or aguenta==0){
        return tab[obj][aguenta]=0;
    }
    if(tab[obj][aguenta]>=0) return tab[obj][aguenta];
    int nao_coloca=knapsack(obj+1,aguenta);
    if(peso[obj]<=aguenta){
        int coloca=valor[obj]+knapsack(obj+1,aguenta-peso[obj]);
        return tab[obj][aguenta]=max(coloca,nao_coloca);
    }
    return tab[obj][aguenta]=nao_coloca;

}
int main(){
    memset(tab,-1,sizeof(tab));

    cin>>p>>n;
    long long int x,y;
    for(int i=0;i<n;i++){   
        cin>>peso[i]>>valor[i];
    }
    cout<<knapsack(0,p)<<endl;

}
