#include <iostream>
#include <cmath>
#define MAXN 10010
using namespace std;

int main(){
    int n,m,vet[MAXN];
    long long int cont=0;
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>vet[i];
    }
    for(int i=1;i<=n;i++){
       if(vet[i-1]<=min(vet[i],m-vet[i])){
          cont+=min(vet[i],m-vet[i]);
          vet[i]=min(vet[i],m-vet[i]);
       }else{
          if(vet[i-1]<=max(vet[i],m-vet[i])){
             cont+=max(vet[i],m-vet[i]);
             vet[i]=max(vet[i],m-vet[i]);
          }else{
             cont=-1;
             break;
          }
       }

    }
    cout<<cont<<endl;




}
