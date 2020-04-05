#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int resp(int a,int l,int p,int n){
	if(a<n) return 0; 
	if(l<n) return 0; 
	if(p<n) return 0; 
	return 1;
}
int main(){
	int n;
	cin>>n;
	int a,l,p;
	cin>>a>>l>>p;
	cout<<(resp(a,l,p,n)?"S":"N")<<endl;
} 
