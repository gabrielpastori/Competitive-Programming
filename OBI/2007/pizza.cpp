#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAXN 200100
int pizza[MAXN];
int lsc(int n){
    int maior=0;
    int soma=0;
    for(int i=0;i<n;i++){
        soma=max(0,soma+pizza[i]);
        maior=max(soma,maior);

    }
    return maior;

}
int main(){
    int n;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        cin>>pizza[i];
        total+=pizza[i];

    }
    

    int maior=lsc(n);
    for(int i=0;i<n;i++){
        pizza[i]=-1*pizza[i];
    }
    int menor=-1*lsc(n);
    cout<<max(maior,total-menor)<<endl;

}
