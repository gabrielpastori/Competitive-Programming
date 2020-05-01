#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 110
int m[MAXN][MAXN];
void marca(int xmenor,int xmaior,int ymenor, int ymaior){
	for(int i=xmenor;i<xmaior;i++){
		for(int j=ymenor;j<ymaior;j++){
			m[i][j]=1;
		}
	}
 
}
int main(){
	memset(m,0,sizeof(m));
	int n,xi,xf,yi,yf;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>xi>>xf>>yi>>yf;
		marca(min(xi,xf),max(xi,xf),min(yi,yf),max(yi,yf));
	}
	int cont=0;
 
	for(int i=0;i<=100;i++){
		for(int j=0;j<=100;j++){
			if(m[i][j]==1) cont++; 
 
		}
 
	}
	cout<<cont<<endl;	
 
} 