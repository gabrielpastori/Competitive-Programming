#include <iostream>
#include <queue>
using namespace std;
#define MAXN 1100
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > fila;
int main(){
	int n,l,lig[MAXN];
	cin>>n>>l;
	int t;
	for(int i=1;i<=n;i++){
		fila.push(make_pair(0,i));
		lig[i]=0;
	}
	int atual,tatual;
	for(int i=0;i<l;i++){
		cin>>t;
		atual=fila.top().second;
		tatual=fila.top().first;
		lig[atual]+=1;
		tatual+=t;
		fila.pop();
		fila.push(make_pair(tatual,atual));
	}
	for(int i=1;i<=n;i++) cout<<i<<" "<<lig[i]<<endl;
	
 
} 