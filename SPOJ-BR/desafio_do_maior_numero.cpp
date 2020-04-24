#include <iostream>
 
using namespace std;
 
int main(){
	int n,maior=0;
	while(cin>>n){
		if(n==0){
			cout<<maior<<endl;
			break;
		}
		if(n>maior) maior=n;
 
	}
 
} 