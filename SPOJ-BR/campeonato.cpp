#include <iostream>
#include <vector>
#include <cstring>
#include <cmath>
using namespace std;
string resposta(int cp,int fp,int cs,int fs){
	if(cp>fp) return "C";
	if(cp<fp) return "F";
	if(cs>fs) return "C";
	if(cs<fs) return "F";
	return "=";
 
}
int main(){
	int cv,ce,cs,fv,fe,fs,cp,fp;
	cin>>cv>>ce>>cs>>fv>>fe>>fs;
	cp=(cv*3)+(ce);
	fp=(fv*3)+(fe);
	cout<<resposta(cp,fp,cs,fs)<<endl;
 
} 