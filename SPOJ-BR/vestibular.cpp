#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int n;
	string gab,resp;
	cin>>n;
	cin>>gab;
	cin>>resp;
	int cont=0;
	for(int i=0;i<n;i++){
		if(gab[i]==resp[i]) cont++;
	}
	cout<<cont<<endl;
 
}
 