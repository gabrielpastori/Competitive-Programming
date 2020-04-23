#include <iostream>
#include <vector>
#include <cstring>
#include <map>
using namespace std;
 
int main(){
	int x,y;
	cin>>x>>y;
	string resp="dentro";
	if(x<0 or y<0 or x>432 or y>468) resp="fora";
	cout<<resp<<endl;
 
} 