//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2438
#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 1000000
int main(){
	long long int n,qtd[10],k,soma=0,resp=0;;
	cin>>n;
	memset(qtd,0,sizeof(qtd));
	qtd[0]=1;
	for(int i=0;i<n;i++){
		cin>>k;
		soma+=k;
		soma%=8;
		resp+=qtd[soma];
		qtd[soma]++;

	}
	
	cout<<resp<<endl;
}