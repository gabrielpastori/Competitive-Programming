#include <iostream>
using namespace std;
#define MAXN 1000010
#define MAXM 1000010
int vet[MAXN],aux[MAXN];
long long int merge_sort(int ini,int fim){
    if(ini==fim) return 0LL;
    long long int invers=merge_sort(ini,(ini+fim)/2)+merge_sort((ini+fim)/2+1,fim);
    int j=(ini+fim)/2+1,tam=0;
    for(int i=ini;i<=(ini+fim)/2;i++){
        while(j<=fim and vet[i]>vet[j]){
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
        tam++;
        j++;

    }
    for(int i=ini;i<=fim;i++){
        vet[i]=aux[i-ini];

    }
    return invers;

}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vet[i];
    }
    cout<<merge_sort(0,n-1)<<endl;

}
