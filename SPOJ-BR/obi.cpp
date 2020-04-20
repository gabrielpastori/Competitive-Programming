#include <iostream>
 
using namespace std;
int main(){
	int n,p;
	cin>>n>>p;
	int cont=0;
	int x,y;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		if((x+y)>=p) cont++;
	}	
	cout<<cont<<endl;
 
 
} 