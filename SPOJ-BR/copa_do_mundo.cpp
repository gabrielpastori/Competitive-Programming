//!IMPORTANT: Need to change to ascii table
#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
char resp(int a){
	if(a==0) return 'A';
	if(a==1) return 'B';
	if(a==2) return 'C';
	if(a==3) return 'D';
	if(a==4) return 'E';
	if(a==5) return 'F';
	if(a==6) return 'G';
	if(a==7) return 'H';
	if(a==8) return 'I';
	if(a==9) return 'J';
	if(a==10) return 'K';
	if(a==11) return 'L';
	if(a==12) return 'M';
	if(a==13) return 'N';
	if(a==14) return 'O';
	if(a==15) return 'P';
 
}
int main(){
	int campeao[10],oitava[20],quartas[10],semi[10],final[10];
	int a,b;
	for(int i=0;i<16;i+=2){
		cin>>a>>b;
		if(a>b) quartas[i/2]=i;
		if(a<b) quartas[i/2]=i+1;
		
 
	}
	for(int i=0;i<8;i+=2){
		cin>>a>>b;
		if(a>b) semi[i/2]=quartas[i];
		if(a<b) semi[i/2]=quartas[i+1];
 
 
	}
	for(int i=0;i<4;i+=2){
		cin>>a>>b;
		if(a>b) final[i/2]=semi[i];
		if(a<b) final[i/2]=semi[i+1];
 
 
	}
	for(int i=0;i<2;i+=2){
		cin>>a>>b;
		if(a>b) campeao[i/2]=final[i];
		if(a<b) campeao[i/2]=final[i+1];
 
 
	}
	cout<<resp(campeao[0])<<endl;
 
}
