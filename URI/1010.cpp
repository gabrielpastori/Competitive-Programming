//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1010
#include <iostream>
using namespace std;

int main(){
  int a,b,d,e=0;
  double c,f=0;
  cin>>a>>b>>c;
  cin>>d>>e>>f;
  double t=b*c+e*f;
  cout<<fixed;
  cout.precision(2);
  cout<<"VALOR A PAGAR: R$ "<<t<<endl;

  return 0;
}