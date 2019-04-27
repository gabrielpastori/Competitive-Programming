#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#define MAXN 2020
typedef long long int lli;
using namespace std;
lli s,notas[6]={2,5,10,20,50,100},qtd[10],tab[10][5050];
lli dp(int obj,int resta){
    if(tab[obj][resta]>=0){
        return tab[obj][resta];
    }
    if(!resta){
        return tab[obj][resta]=1;

    }
    if(resta<0 or obj>6){
        return tab[obj][resta]=0;

    }
    lli cont=0;
    for(int i=0;i<=qtd[obj];i++){
        if(i*notas[obj]>resta){
            break;

        }
        cont+=dp(obj+1,resta-i*notas[obj]);

    }
    return tab[obj][resta]=cont;

}
int main(){
    cin>>s;
    for(int i=0;i<6;i++){
        cin>>qtd[i];

    }
    memset(tab,-1,sizeof(tab));
    cout<<dp(0,s)<<endl;


}
