//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1009
#include <iostream>
using namespace std;

int main(){
  string nome ="s";
  double a,b=0;
  cin>>nome;
  cin>>a;
  cin>>b;
  double t = a+(b*0.15);
  cout<<fixed;
  cout.precision(2);
  cout<<"TOTAL = R$ "<<t<<endl;


  return 0;
}
