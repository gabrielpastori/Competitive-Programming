#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	long long int n,a,b,resp;
	char c;
	cin>>n;
	cin>>a>>c>>b;
	if(c=='*'){
		resp=a*b;
	}
	if(c=='+'){
		resp=a+b;
	}
	if(resp>n) cout<<"OVERFLOW"<<endl;
	else cout<<"OK"<<endl;
 
 
} 