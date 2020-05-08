#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int n,custo=7;
	cin>>n;
	if(n>=11){
		if(n<=30){
			custo+=(n-10);
		}else{
			custo+=20;
		}
 
	}
	if(n>=31){
		if(n<=100){
			custo+=((n-30)*2);
		}else{
			custo+=140;
		}
	}
	if(n>=101) custo+=((n-100)*5);
	cout<<custo<<endl;
} 