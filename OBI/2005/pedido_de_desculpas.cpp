#include <iostream>
#include <cstring>
using namespace std;
#define MAXF 60
#define MAXC 1100
int c,n;
int peso[MAXF],valor[MAXF],tab[MAXF][MAXC];
int knapsack(int obj,int aguenta){
    if(tab[obj][aguenta]>=0){
        return tab[obj][aguenta];

    }
    if(obj==n or aguenta==0){
        return tab[obj][aguenta]=0;
    }
    

    int nao_coloca=knapsack(obj+1,aguenta);
    if(aguenta>=peso[obj]){
        int coloca=knapsack(obj+1,aguenta-peso[obj])+valor[obj];
        return tab[obj][aguenta]=max(nao_coloca,coloca);
    }
    return tab[obj][aguenta]=nao_coloca;



}
int main(){
    int j=1;
    while(cin>>c>>n){
        if(c==0 and n==0) break;
        memset(tab,-1,sizeof(tab));
        for(int i=0;i<n;i++){
            cin>>peso[i]>>valor[i];


        }
        cout<<"Teste "<<j<<endl;
        cout<<knapsack(0,c)<<endl;
        cout<<endl;
        j++;
    }    
}
