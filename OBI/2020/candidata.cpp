#20% TLE
#include <iostream>
using namespace std;
#define MAXN 100100
int vet[MAXN];
int mdc(int a,int b){
    if(a==0) return b;
    return mdc(b%a,a);
}
int subarr(int ini,int fim){
    int resp=0,atual=1;
    for(int i=ini;i<=fim;i++){
        for(int j=i;j<=fim;j++){
            for(int k=i;k<=j;k++){
                if(k==i) atual=vet[k];
                else atual=mdc(atual,vet[k]);
            }
            if(atual>1) resp++;
        }
    }
    return resp;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>vet[i];
    }
    int t,a,b;
    for(int i=0;i<m;i++){
        cin>>t;
        cin>>a>>b;
        if(t==1){
            vet[a]=b;
        }
        if(t==2){
            cout<<subarr(a,b)<<endl;
        }
    }
}
