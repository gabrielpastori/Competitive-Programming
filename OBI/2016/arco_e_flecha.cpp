#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
typedef long long int lli;
using namespace std;

lli vet[100010],aux[100010];
lli merge_sort(int ini, int fim){
    int inv=0;
    if(ini==fim){
        return 0;

    }
    lli invers=merge_sort(ini,(ini+fim)/2)+merge_sort((ini+fim)/2+1,fim);

    int j=(ini+fim)/2+1,tam=0;
    for(int i=ini;i<=(ini+fim)/2;i++){
        while(j<=fim and vet[j]<vet[i]){
            aux[tam]=vet[j];
            j++;
            tam++;
            invers+=(ini+fim)/2-i+1;

        }
        aux[tam]=vet[i];
        tam++;

    }
    while(j<=fim){
        aux[tam]=vet[j];
        j++;
        tam++;
    }
    for(int i=ini;i<=fim;i++){
        vet[i]=aux[i-ini];

    }
    return invers;



}

int main(){
    lli n,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        vet[i]=x*x+y*y;
    }
    cout<<(n*(n-1)/2)-merge_sort(0,n-1)<<endl;



}

