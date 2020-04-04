#include <iostream>
 
using namespace std;
#define MAXN 110
#define MAXM 110
int main(){
	int n,m,mat[MAXN][MAXM];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	int maior=0;
	int soma=0;
	for(int i=0;i<n;i++){
		soma=0;
		for(int j=0;j<m;j++){
			soma+=mat[i][j];
		}
		maior=max(soma,maior);
	}
	for(int j=0;j<m;j++){
		soma=0;
		for(int i=0;i<n;i++){
		soma+=mat[i][j];
 
		}
		maior=max(soma,maior);
	}
	cout<<maior<<endl;
	return 0;
} 
