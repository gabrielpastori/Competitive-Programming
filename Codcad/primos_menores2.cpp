#include <iostream>
#include <cstring>
using namespace std;
int v[10000100];
bool naoprimos[10000100];
int geravetor(int n){
	v[0]=7;
	v[1]=11;
	v[2]=13;
	v[3]=17;
	v[4]=19;
	v[5]=23;
	v[6]=29;
	v[7]=31;
	int t=8;
	while(v[t-1]<=n){
		v[t]=v[t-8]+30;
		
		t++;

	}
	return t;
}

void eliminaCompostos(int n){
	int i=0;
	while(true){
		int j=i,next=0;
		if((v[i]*v[j])>n) break;
		while(true){
			int next=v[i]*v[j];
			if(next>n) break;
			naoprimos[next]=1;
			
			
			
			j++;
		}
		i++;

	}
}
int main(){
	long long int n;
	cin>>n;
	int i=0;

	int total=geravetor(n);
	
	eliminaCompostos(n);
	if(n>=2) cout<<"2 ";
	if(n>=3) cout<<"3 ";
	if(n>=5) cout<<"5 ";
	while(v[i]<=n){
		if(naoprimos[v[i]]!=1) cout<<v[i]<<" ";
		i++;
	}
	cout<<endl;
	
}
