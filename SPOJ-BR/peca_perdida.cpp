#include <iostream>
#include <set>
#include <cstring>
using namespace std;
#define MAXN 1100
#define MAXM 110
set<int> s;
int main(){
	int n,a,v[MAXN];
	cin>>n;
	memset(v,0,sizeof(v));
	for(int i=0;i<n-1;i++){
		cin>>a;
		v[a]=1;
	}
	for(int i=1;i<=n;i++){
		if(v[i]==0){
			cout<<i<<endl;
			break;
		}
 
	}
 
} 