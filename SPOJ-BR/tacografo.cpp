#include <iostream>
 
using namespace std;
 
int main(){
	int n,t,v;
	cin>>n;
	int distancia=0;
	for(int i=0;i<n;i++){
		cin>>t>>v;
		distancia+= (t*v);
	}
	cout<<distancia<<endl;
 