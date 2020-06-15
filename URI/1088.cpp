//Problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/1088
#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 100100
#define lli long long int
int v[MAXN],aux[MAXN];
lli merge(int ini,int fim){
    if(ini==fim) return 0;
    int meio=(ini+fim)/2;
    lli resp=merge(ini,meio)+merge(meio+1,fim);
    int j=meio+1,tam=0;
    for(int i=ini;i<=meio;i++){
        while(v[j]<v[i] and j<=fim){
            aux[tam]=v[j];
            resp+=(meio-i)+1;
            j++;
            tam++;
        }
        aux[tam]=v[i];
        tam++;
    }
    while(j<=fim){
        aux[tam]=v[j];
        j++;
        tam++;
    }
    for(int i=ini;i<=fim;i++){
        v[i]=aux[i-ini];
    }
    return resp;

}
int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        cout<<(merge(1,n)%2==0?"Carlos":"Marcelo")<<endl;
    }
    
        
    
	
}