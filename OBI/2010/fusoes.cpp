#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 100000
 int vet[MAXN],peso[MAXN];
 int pai(int x){
 	if(vet[x]==x){
 		return x;
 	}
 	return vet[x]=pai(vet[x]);

 }
void join(int x,int y){
	x=pai(x);
	y=pai(y);
	if(x==y){
		return;
	}
	if(peso[x]<peso[y]){
		vet[x]=y;
	}
	if(peso[x]>peso[y]){
		vet[y]=x;
	}
	if(peso[y]==peso[x]){
		vet[x]=y;
		peso[y]++;

	}
}
int main(){
    int n,k,a,b;
    char t;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
    	vet[i]=i;
    }
    for(int i=0;i<k;i++){
    	cin>>t>>a>>b;
    	if(t=='F'){
    		join(a,b);

    	}
    	if(t=='C'){
    		if(pai(a)==pai(b)){
    			cout<<"S"<<endl;
    		}else{
    			cout<<"N"<<endl;

    		}
    	}

    }
}
