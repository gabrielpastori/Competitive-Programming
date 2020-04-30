#include <iostream>
 
using namespace std;
#define MAXN 110
char vet[MAXN][MAXN];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>vet[i][j];
		}
	}
	int aux,cont=0,maior=0;;
	for(int i=0;i<n;i++){
 
		for(int j=0;j<n;j++){
			
			if(i%2==0){
				aux=j;
			}else{
				aux=n-1-j;
			}
 
			if(vet[i][aux]=='o'){
				cont++;
			}
			if(vet[i][aux]=='A'){
				maior=max(maior,cont);
				cont=0;
			}
 
		}
	}
	maior=max(cont,maior);
	cout<<maior<<endl;
 
} 