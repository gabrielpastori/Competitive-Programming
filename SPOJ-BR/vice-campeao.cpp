#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int resp(int a,int b,int c){
	int maior=max(max(a,b),c);
	int menor=min(min(a,b),c);
	if(a!=maior and a!=menor) return a;
	if(c!=maior and c!=menor) return c;
	if(b!=maior and b!=menor) return b;
	return c;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<resp(a,b,c)<<endl;
} t