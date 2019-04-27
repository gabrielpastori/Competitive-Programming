#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
#define MAX 1300100
int vet[1300100];
int pos[1300100];
void crivo(){
	vet[1]=1;
	int cont=1;
	for(int i=2;i<MAX;i++){
		if(!vet[i]){
			for(int j=1;j*i<MAX;j++){
				vet[i*j]=1;
			}
			pos[i]=cont;
			cont++;

		}
	}
}
int main(){
	int q,k;
	cin>>q;
	crivo();
	for(int i=0;i<q;i++){
		cin>>k;
		cout<<pos[k]<<endl;
	}
	
}
