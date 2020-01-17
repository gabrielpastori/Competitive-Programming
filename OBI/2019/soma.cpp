//50%
//TODO:100%
#include <iostream>

using namespace std;
#define MAXN 500100
int x[MAXN];
int main(){
    int n,k;
    cin>>n>>k;
    

    for(int i=1;i<=n;i++){
        cin>>x[i];
        
        
    }
    unsigned long long int cont=0;
    for(int i=1;i<=n;i++){
        
        int soma=x[i];
        int j=i+1;
        if(soma==k) cont++;
        while(soma<=k and j<=n){
            
            soma+=x[j];
            if(soma==k) cont++;
            j++;
        }
    }
    cout<<cont<<endl;
}
