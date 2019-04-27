#include <iostream>
using namespace std;
#define MAXN 1000010
#define MAXM 1000010
long long int n,vet[MAXN],aux[MAXN];
void merge_sort(int ini,int fim){
    if(ini==fim){
        return;
    }
    merge_sort(ini,(ini+fim)/2);
    merge_sort((ini+fim)/2+1,fim);
    int j=(ini+fim)/2+1,tam=0;
    for(int i=ini;i<=(ini+fim)/2;i++){
        while(vet[i]>vet[j] and j<=fim){
            aux[tam]=vet[j];
            j++;
            tam++;

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
    return ;

}
int main(){
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vet[i];

    }
    merge_sort(0,n-1);
    for(int i=n-1;i>=0;i--){
        cout<<vet[i]<<" ";

    }


}
