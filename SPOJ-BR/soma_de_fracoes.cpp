#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int mdc(int x,int y){
	if(y==0) return x;
 
	return mdc(y,x%y);
}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int deno=b*d;
	int num=(a*d+c*b);
	int md=mdc(max(num,deno),min(num,deno));
	deno/=md;
	num/=md;
	cout<<num<<" "<<deno<<endl;
 
} 