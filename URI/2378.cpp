//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2378
#include <iostream>
#include <climits>
#include <stdio.h>
#include <queue>
using namespace std;

int main(){
	int n,c,s,e;
	cin>>n>>c;
	int t=0;
	bool ok=1;
	for(int i=0;i<n;i++){
		cin>>s>>e;
		t-=s;
		t+=e;
		if(t>c and ok){
			cout<<"S"<<endl;
			ok=0;
		}
	}
	if(ok) cout<<"N"<<endl;
	
}
