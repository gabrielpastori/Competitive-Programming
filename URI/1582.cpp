//Problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/1582
#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;
int mdc(int x,int y){
	if(y==0) return x;

	return mdc(y,x%y);
}
int main(){
	int x,y,z;
	while (scanf("%d", &x) == 1 and scanf("%d", &y) == 1 and scanf("%d", &z) == 1){
		
		if(max(x,max(y,z))== z){
			swap(x,z);
		}
		if(max(x,max(y,z))== y){
			swap(x,y);
		}
		if(x*x==(y*y+z*z)){
			if(mdc(x,mdc(max(y,z),min(y,z)))==1){
				cout<<"tripla pitagorica primitiva"<<endl;
			}else{
				cout<<"tripla pitagorica"<<endl;
			}

		}else{
			cout<<"tripla"<<endl;
		}
	}
}