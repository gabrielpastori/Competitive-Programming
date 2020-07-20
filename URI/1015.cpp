//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1015
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float x1,y1,x2,y2=0;
  cin>>x1>>y1;
  cin>>x2>>y2;

  double e1 = pow((x2-x1),2);
  double e2 = pow((y2-y1),2);
  double distancia=sqrt(e1+e2);
  cout<<fixed;
  cout.precision(4);
  cout<<distancia<<endl;

  return 0;
}