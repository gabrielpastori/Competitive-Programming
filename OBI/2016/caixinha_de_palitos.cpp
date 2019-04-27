#include <iostream>
#include <sstream>
using namespace std;
int main(){
	long long int cont=0;
	int n,m;
	cin>>n>>m;
	for(int r=1;r<=m;r++){
		int gb=n-r;
		if(2*m<gb) continue;
			int menor=max(1,gb-m);
			int maior=min(gb-1,m);
			cont+=(maior-menor+1);
		

	}
	cout<<cont<<endl;

		
}
