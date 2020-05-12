#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
#define	MAXN 110
int n,m[MAXN][MAXN],mark[MAXN][MAXN],aux[MAXN][MAXN],dx[4]={-1,0,1,-1},dy[4]={0,1,0,-1};
int dist(int x,int y,int a,int b){
	return (abs(x-a)+abs(y-b));
 
}
int dfs(int x,int y,int p){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(dist(i,j,x,y)==p){
				m[i][j]+=1;
 
			}
		}
	}
}
int main(){
	int k,x,y,d;
	cin>>n>>k;
	memset(m,0,sizeof(m));
	memset(mark,0,sizeof(mark));
 
	for(int i=0;i<k;i++){
		cin>>x>>y>>d;
	
		dfs(x,y,d);
	}
	bool ok=0;
	int rx=-1,ry=-1;
 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(m[i][j]==k){
				if(ok==1){
					rx=-1;
					ry=-1;
					break;
				}
				rx=i;
				ry=j;
				ok=1;
			}
		}
	}
	cout<<rx<<" "<<ry<<endl;	
} 