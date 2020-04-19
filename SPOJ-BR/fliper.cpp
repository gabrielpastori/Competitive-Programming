#include <iostream>
 
using namespace std;
int p,r;
string verifica(){
	if(p==1 and r==0) return "B";
	if(p==0) return "C";
	return "A";
}
int main(){
	cin>>p>>r;
	cout<<verifica()<<endl;
 
} 