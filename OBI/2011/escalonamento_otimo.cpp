#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define MAXN 50100
vector<int> v[MAXN];

int main(){
	int n,m,a,b,grau[MAXN];
	cin>>n>>m;
	for(int i=0;i<n;i++) grau[i]=0;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		v[a].push_back(b);
		grau[b]++;
	}
	set<int> zeros;
	for(int i=0;i<n;i++){
		if(grau[i]==0) zeros.insert(i);
	}
	int count=0,resp[MAXN];
	while(!zeros.empty()){
		int atual = *zeros.begin();
		zeros.erase(atual);
		resp[count]=atual;
		count++;
		for(int i=0;i<v[atual].size();i++){
			grau[v[atual][i]]--;
			if(grau[v[atual][i]]==0) zeros.insert(v[atual][i]);



		}

	}
	if(count!=(n)) cout<<"*"<<endl;
	else{
		for(int i=0;i<count;i++) cout<<resp[i]<<endl;

	}


}
