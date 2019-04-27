#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 10100
struct Pilotos{
	int id;
	int pos=0;

};
bool comparar(Pilotos a,Pilotos b){
	return (a.pos>b.pos) || (a.pos == b.pos && a.id<b.id);

}
int main(){
	int g,p;
	while(cin>>g>>p){
		if(g==0 and p==0){
			break;

		}
		Pilotos vp[p];
		Pilotos original[p];
		int corridas[g][p];
		for(int i=0;i<g;i++){
			for(int j=0;j<p;j++){
				cin>>corridas[i][j];
				if(i==0){
					vp[j].id=j+1;
					original[j].id=j+1;

				}
			}

		}
		int s;
		cin>>s;
		for(int i=0;i<s;i++){
			int k;
			cin>>k;
			int pos[p];
			for(int j=0;j<p;j++){
				vp[j]=original[j];

			}
			for(int j=0;j<k;j++){
				cin>>pos[j];

			}
			for(int j=k;j<p;j++){
				pos[j]=0;
			}
			for(int j=0;j<g;j++){
				for(int r=0;r<p;r++){
					vp[r].pos+=pos[corridas[j][r]-1];


				}

			}
			sort(vp,vp+p,comparar);
			for(int j=0;j<p;j++){
				if(vp[0].pos==vp[j].pos){
					cout<<vp[j].id<<" ";

				}else{
					break;

				}

			}
			cout<<endl;

		}

	}

}
