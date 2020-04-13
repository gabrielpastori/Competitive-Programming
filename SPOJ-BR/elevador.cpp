#include <iostream>
 
using namespace std;
int main(){
	int n,c;
	cin>>n>>c;
	int s,e;
	int cont=0;
	bool ok=1;
	for(int i=0;i<n;i++){
		cin>>s>>e;
		cont-=s;
		cont+=e;
		if(cont>c) ok=0; 
	}
	cout<<(ok?"N":"S")<<endl;
}