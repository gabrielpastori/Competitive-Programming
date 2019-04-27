#include <iostream>
#include <climits>
#define MAXN 100010
using namespace std;
int n,m,faixa[MAXN],premi[MAXN],res,ogro[MAXN];
int buscab(int x){
    int ini=0,fim=n-1,meio;
    while(ini<=fim){
        meio=(ini+fim)/2;
        if(faixa[meio]<=x){
            ini=meio+1;
            res=meio;
        }
        if(faixa[meio]>x){
            fim=meio-1;
        }


    }
    return res;


}


int main(){
    faixa[0]=0;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        cin>>faixa[i];
    }
    for(int i=0;i<n;i++){
        cin>>premi[i];
    }
    for(int i=0;i<m;i++){
        cin>>ogro[i];
        cout<<premi[buscab(ogro[i])]<<" ";
    }

}
