#include <iostream>
 
using namespace std;
int a,b,c,d,e;
string verifica(){
	if(a>b and b>c and c>d and d>e) return "D";
	if(a<b and b<c and c<d and d<e) return "C";
	return "N";
}
int main(){
	
	cin>>a>>b>>c>>d>>e;
	cout<<verifica()<<endl;
} 