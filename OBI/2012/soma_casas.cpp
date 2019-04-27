#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int k,n,vet[100010];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vet[i];
    }
    cin>>k;
    int j=n-1,i=0;
    while(vet[j]+vet[i]!=k){
        if(vet[j]+vet[i]>k){
            j--;
        }else{
            i++;
        }
    }
    cout<<vet[i]<<" "<<vet[j]<<endl;



}
