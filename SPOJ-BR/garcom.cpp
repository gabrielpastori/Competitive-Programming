#include <iostream>
 
using namespace std;
 
int main(){
	int n,l,c;
	cin>>n;
	int cont=0;
	for(int i=0;i<n;i++){
		cin>>l>>c;
		if(l>c)cont+=c; 
 
	}
	cout<<cont<<endl;
 
} 