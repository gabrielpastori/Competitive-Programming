
#include <iostream>
#include <cmath>
using namespace std;
#define MAXN 1010

int main(){
    int n,m,vet[MAXN],cont=0,k;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>vet[i];
    }
    for(int i=0;i<n-1;i++){
        k=m-vet[i];
        cont+=abs(k);
        vet[i]+=k;
        vet[i+1]+=k;
    }
    cout<<cont<<endl;
}
