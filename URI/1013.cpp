//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1013
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b,c,maior=0;
  cin>>a>>b>>c;
  if (a!=b){
    if (a>b){
      maior=a;
    }else{
      maior=b;}
  }else{
    if(a>c){
      maior=a;
    }else{
      maior=c;
    }
  }
  if (c>maior){
    maior=c;
  }
  cout<<maior<<" eh o maior"<<endl;
  return 0;
}

