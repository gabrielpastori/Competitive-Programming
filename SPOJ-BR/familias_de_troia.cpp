#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
#define MAXN 50100
vector<int> v[MAXN];
int familia[MAXN];
int dfs(int x,int z){
	familia[x]=z;
	for(int i=0;i<v[x].size();i++){
		if(familia[v[x][i]]==-1){
			dfs(v[x][i],z);
		}
 
	}
}
int main(){
	int n,m,a,b;
	cin>>n>>m;
	memset(familia,-1,sizeof(familia));
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int z=1;
	for(int i=1;i<=n;i++){
		if(familia[i]==-1){
			dfs(i,z);
			z++;
		}
 
	}
	cout<<z-1<<endl;
}
 