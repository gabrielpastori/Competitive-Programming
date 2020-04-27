#include <iostream>
 
using namespace std;
 
int main(){
	int l;
	cin>>l;
	int c;
	cin>>c;
	int cont=0,k;
	for(int i=0;i<c;i++){
		cin>>k;
		if(k*l>=40000000) cont++;
	}
	cout<<cont<<endl;
	return 0;
} 