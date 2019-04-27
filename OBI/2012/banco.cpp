#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 10000
int main(){
	priority_queue< pair< int, int > , vector< pair< int, int> >, greater< pair< int, int > > > v;
	priority_queue< int, vector< int >, greater< int > > p;

	int c,n,t,d,k=0,l=0;
	cin>>c>>n;
	for(int i=0;i<n;i++){
		cin>>t>>d;
		v.push(make_pair(t,d));
	}
	
	for(int i=0;i<c;i++){
		p.push(0);
	}
	int caixa,aux;
	pair<int,int> cliente;
	for(int i=0;i<n;i++){
		aux=0;
		cliente=v.top();
		caixa=p.top();
		if(caixa-cliente.first>20){
			l++;
		}
		aux=caixa;
		if(cliente.first>caixa){
			aux=cliente.first;
		}
		aux+=cliente.second;
		p.pop();
		v.pop();
		p.push(aux);


	}
	cout<<l<<endl;

    

 
    
}
