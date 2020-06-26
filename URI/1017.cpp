//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1017
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a,b=0;
  cin>>a;
  cin>>b;
  double d = a*b/12.0;
  cout<<fixed;
  cout.precision(3);
  cout<<d<<endl;
  return 0;
}