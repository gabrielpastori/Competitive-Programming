#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 300
#define MAXM 300
int ma[MAXN][MAXM],dx[8]={-1,-1,-1,0,1,1,1,0},dy[8]={-1,0,1,1,1,0,-1,-1},cont=0,n,m;
int paint(int x,int y){
	ma[x][y]=1;
	cont++;
	for(int i=0;i<8;i++){
		int a=x+dx[i];
		int b=y+dy[i];
		if(!ma[a][b] and a>0 and a<=n and b>0 and b<=m){
			paint(a,b);
		}
	}
}
int main(){
	int x,y,k,a,b;
	memset(ma,0,sizeof(ma));
	cin>>n>>m>>x>>y>>k;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		ma[a][b]=1;
 
	}
	paint(x,y);
	cout<<cont<<endl;
} 