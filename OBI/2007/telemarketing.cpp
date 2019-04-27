#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 1000
int main(){
	int n,l,t,vendedores[MAXN];
	cin>>n>>l;
	priority_queue< pair< int, int > , vector< pair< int, int> >, greater< pair< int, int > > > v;
	for(int i=1;i<=n;i++){
		v.push(make_pair(0,i));
		vendedores[i]=0;
	}
	pair<int,int> vela;
	int vendedor;
	int id;
	int aux;
	for(int i=0;i<l;i++){
		cin>>t;
		vela=v.top();
		id=vela.second;
		vendedor=vela.first;
		aux=vendedor+t;
		vendedores[id]+=1;
		v.pop();
		v.push(make_pair(aux,id));

	}
	for(int i=1;i<=n;i++){
		cout<<i<<" "<<vendedores[i]<<endl;
	}

    

 
    
}
