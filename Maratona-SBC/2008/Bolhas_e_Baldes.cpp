#include <iostream>
using namespace std;

#define MAXN 100010
#define lli long long int
lli merge(int ini,int fim,int v[],int aux[]){
	if(ini==fim) return 0LL;

	lli invers=merge(ini,(ini+fim)/2,v,aux)+merge((ini+fim)/2+1,fim,v,aux);
	int j=(ini+fim)/2+1,tam=0;
	for(int i=ini;i<=(ini+fim)/2;i++){
		while(v[j]<	v[i] and j<=fim){
			aux[tam]=v[j];
			j++;
			tam++;
			invers+=(ini+fim)/2-i+1;
		}
		aux[tam]=v[i];
		tam++;

	}
	while(j<=fim){
		aux[tam]=v[j];
		tam++;
		j++;

	}
	for(int i=ini;i<=fim;i++){
		v[i]=aux[i-ini];

	}
	return invers;

}
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int v[MAXN],aux[MAXN];
		for(int i=0;i<n;i++){
			cin>>v[i];

		}
		cout<<(merge(0,n-1,v,aux)%2==0?"Carlos":"Marcelo")<<endl;
		
		

	}
	
		
}
