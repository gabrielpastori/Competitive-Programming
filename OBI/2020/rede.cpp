#include <iostream>
using namespace std;
#define MAXR 1000100
int vet[MAXR];
int main(){
    int n,r,maior=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>r;
        vet[r]++;
        maior=max(maior,r);
    }
    unsigned long long int soma=0,resp=0;
    for(int i=maior;i>=1;i--){
        soma+=vet[i];
        if(soma>=i){
            resp=i;
            break;
        }
    }
    cout<<resp<<endl;
}