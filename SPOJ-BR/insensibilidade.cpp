#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
using namespace std;
 
int main(){
	int n,x1,y1,x2,y2,dif;
	cin>>n;
	long long int cont=0;
	for(int i=0;i<n;i++){
		cin>>x1>>y1>>x2>>y2;
		dif=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		cont+=(dif);
	}
	cout<<cont<<endl;	
} 