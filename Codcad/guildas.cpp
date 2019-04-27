#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 100000
int pai[MAXN],peso[MAXN],pontos[MAXN],pai_r;
int find(int x){
	if(pai[x]==x){
		return x;
	}
	return pai[x]=find(pai[x]);
}
void junta(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y){
		return;
	}
	if(peso[x]<peso[y]){
		if(pai_r==x){
			pai_r=y;
		}
		pai[x]=y;
		pontos[y]+=pontos[x];
		peso[y]++;
	}else{
		if(pai_r==y){
			pai_r=x;
		}
		pai[y]=x;
		pontos[x]+=pontos[y];
		peso[x]++;

	}

}
int main(){
	int n,m,q,a,b;
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>n>>m){
		int t=0;
		if(n==0 and m==0){
			break;

		}
		for(int i=1;i<=n;i++){
			peso[i]=0;
			cin>>pontos[i];
			pai[i]=i;

		}
		pai_r=1;
		for(int i=0;i<m;i++){
			cin>>q>>a>>b;
			if(q==1){
				junta(a,b);
			}
			if(q==2){
				a=find(a);
				b=find(b);
				if(a==pai_r and pontos[a]>pontos[b] ){
					t++;
				}
				if(b==pai_r and pontos[b]>pontos[a]){
					t++;
				}


				

			}

		}
		cout<<t<<endl;
	}
    

 
    
}
