#include <iostream>
using namespace std;

int main(){
  string tel;
  cin>>tel;
  for (int i=0;i<tel.size();i++){
    if (tel[i]=='A' || tel[i]=='B' || tel[i]=='C' ){
      tel[i]='2';
    }
    if (tel[i]=='D' || tel[i]=='E' || tel[i]=='F' ){
      tel[i]='3';
    }
    if (tel[i]=='G' || tel[i]=='H' || tel[i]=='I' ){
      tel[i]='4';
    }
    if (tel[i]=='J' || tel[i]=='K' || tel[i]=='L' ){
      tel[i]='5';
    }
    if (tel[i]=='M' || tel[i]=='N' || tel[i]=='O' ){
      tel[i]='6';
    }
    if (tel[i]=='P' || tel[i]=='Q' || tel[i]=='R' || tel[i]=='S' ){
      tel[i]='7';
    }
    if (tel[i]=='T' || tel[i]=='U' || tel[i]=='V' ){
      tel[i]='8';
    }
    if (tel[i]=='W' || tel[i]=='X' || tel[i]=='Y' || tel[i]=='Z' ){
      tel[i]='9';
    }
  }
  cout<<tel<<endl;
  return 0;
}
