#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <algorithm>
using namespace std;
int idade[550],menor,mark[550],func[550],z=1;
vector<int> v[550];


void dfs(int x){
	mark[x]=z;
	for(int i=0;i<v[x].size();i++){
		int k=v[x][i];
		if(mark[k]!=z){
			if(idade[k]<menor) menor=idade[k];
			dfs(k);
			
		}
		

	}
}
int main(){
	int x,y,n,m,l,a,b;

	cin>>n>>m>>l;
	for(int i=1;i<=n;i++){
		cin>>idade[i];
		func[i]=i;
	
	}
	for(int i=0;i<m;i++){
		cin>>x>>y;
		v[y].push_back(x);

	}
	char t;
	int e;
	memset(mark,0,sizeof(mark));
	for(int i=0;i<l;i++){
		cin>>t;
		if(t=='T'){
			cin>>a>>b;
			int ax=idade[func[a]];
			idade[func[a]]=idade[func[b]];
			idade[func[b]]=ax;
			ax=func[a];
			func[a]=func[b];
			func[b]=ax;
     	}
     
		if(t=='P'){
			t++;
			cin>>e;
			menor=550;
			++z;
			dfs(func[e]);
			
			if(menor!=550){
				cout<<menor<<endl;
			}else{
				cout<<"*"<<endl;
			}
			

		}


	}
	

}
