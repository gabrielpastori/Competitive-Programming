#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 10100
int n,m,h,geracao[MAXN],qtd[MAXN],presenca[MAXN];
vector<int> lista[MAXN];
void dfs(int v=0,int l=0){
	geracao[v]=l;
	qtd[l]++;
	h=max(h,l);
	for(int i=0;i<lista[v].size();i++){
		dfs(lista[v][i],l+1);

	}

}
int main(){
  	cin>>n>>m;
  	for(int i=1;i<=n;i++){
  		int p;
  		cin>>p;
  		lista[p].push_back(i);


  	}
  	dfs();
  	for(int i=1;i<=m;i++){
  		int part;
  		cin>>part;

  		presenca[geracao[part]]++;

  	}
  	cout<<fixed;
  	cout.precision(2);
  	for(int i=1;i<=h;i++){
  		cout<<100.0*presenca[i]/qtd[i]<<" ";

  	}
  	cout<<endl;
}
