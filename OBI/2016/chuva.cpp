#include <iostream>
using namespace std;

#define MAXN 100010
long long int h[MAXN];
int main(){
	long long  n,cont=0,prefixo[MAXN],sufixo[MAXN];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i];

	}
	prefixo[0]=h[0];
	for(int i=1;i<n;i++){
		prefixo[i]=max(prefixo[i-1],h[i]);

	}
	sufixo[n-1]=h[n-1];
	for(int i=n-2;i>=0;i--){
		sufixo[i]=max(sufixo[i+1],h[i]);

	}
	
	for(int i=0;i<n;i++){
		if(h[i]<prefixo[i] and h[i]<sufixo[i] ){
			cont++;
		}
	}
	cout<<cont<<endl;

	
}
