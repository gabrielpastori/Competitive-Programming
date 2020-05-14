#include <iostream>
#include <cstring>
using namespace std;
#define MAXF 650
int main () {
	int v[MAXF];
	int f1,f2,f3;
	cin>>f1>>f2>>f3;
	memset(v,0,sizeof(v));
	for(int i=f1;i<=(f1+200);i++){
		v[i]=1;
	}
	for(int i=f2;i<=(f2+200);i++){
		v[i]=1;
	}
	for(int i=f3;i<=(f3+200);i++){
		v[i]=1;
	}
	int cont=0;
	bool ok=1;
	int start=0,end=0;
	v[600]=1;
	for(int i=0;i<=600;i++){
		if(v[i]==0){
			if(ok){
				start=max(0,i-1);
				ok=0;
			}
			
		}
		if(v[i]==1 and !ok){
			ok=1;
			end=i;
			cont+=(end-start);
		}
		
	}
	cout<<cont*100<<endl;
}
