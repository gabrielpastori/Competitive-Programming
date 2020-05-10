#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 110
int m[MAXN][MAXN];
 
int main(){
	int n,r,u,v,w,menor=INT_MAX;
	cin>>n>>r;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) m[i][j]=0;
			else m[i][j]=900000;
		}
 
	}
	for(int i=0;i<r;i++){
		cin>>u>>v>>w;
		m[u][v]=w;
		m[v][u]=w;
		
	}
 
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				m[i][j]=min(m[i][j],m[i][k]+m[k][j]);
			}
		}
 
	}
	
	int maior;
	for(int i=0;i<n;i++){
		maior=0;
		for(int j=0;j<n;j++){
			if(m[i][j]>maior) maior=m[i][j];
 
		}
		menor=min(menor,maior);
	}
	cout<<menor<<endl;
}
