#include <iostream>
 
using namespace std;
char verifica(char p){
	if(p=='A' or p =='B' or p=='C') return '2';
	if(p=='D' or p =='E' or p=='F') return '3';
	if(p=='G' or p =='H' or p=='I') return '4';
	if(p=='J' or p =='K' or p=='L') return '5';
	if(p=='M' or p =='N' or p=='O') return '6';
	if(p=='P' or p =='Q' or p=='R' or p=='S') return '7';
	if(p=='T' or p =='U' or p=='V') return '8';
	if(p=='W' or p =='X' or p=='Y' or p=='Z') return '9';
	return p;
}
int main(){
	string s;
	cin>>s;
	string resp="";
	char l;
	for(int i=0;i<s.size();i++){
		l=verifica(s[i]);
		resp+=l;
	}
	cout<<resp<<endl;
 
} 