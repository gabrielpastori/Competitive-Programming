#include <iostream>
using namespace std;
#define MAXN 100100
#define MAXL 400010
int tree[MAXL],n,k,x[MAXN];
int aux(int v){
	if(v>0) return 1;
	if(v<0) return -1;
	return 0;
}
void constroi(int node,int start,int end){
	if(start==end){
		tree[node]=	aux(x[start]);
	}else{
		int mid=(start+end)/2;
		constroi(2*node,start,mid);
		constroi(2*node+1,mid+1,end);
		tree[node]=tree[node*2]*tree[2*node+1];

	}



}
void update(int index, int a, int b, int i, int x)
{
	if (i > b || i < a) return;
	
	if (a == b && b == i)
	{
		tree[index] = aux(x);
		return;
	}
	int m = (a + b) / 2;
	update(2 * index, a, m, i, x);
	update(2 * index + 1, m + 1, b, i , x);
	
	tree[index] = tree[index * 2] * tree[index * 2 + 1];
}
int query(int index, int a, int b, int i, int j)
{
	if (i > b || j < a) return 1;
	
	if (a >= i && b <= j) return tree[index];
	int m = (a + b) / 2;
	int x0 = query(index * 2, a, m, i, j);
	int x1 = query(index * 2 + 1, m + 1, b, i, j);
	
	return x1 * x0;
	
}
int main(){
	while(cin>>n>>k){
		int m;
		for(int i=1;i<=n;i++){
			cin>>m;
			x[i]=aux(m);
		}
		
		constroi(1,1,n);
		
		char a;
		int l,v;
		string s="";
		for(int i=0;i<k;i++){
			cin>>a;
			if(a=='C'){
				cin>>l>>v;
				update(1,1,n,l,aux(v));

			}else{
				cin>>l>>v;
				int answer = query(1, 1, n, l, v);
				cout << (answer == 1? '+' : (answer == 0? '0' : '-'));

			}

		}
		cout<<endl;
	}
}
