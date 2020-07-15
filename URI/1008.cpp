//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1008
#include <iostream>
using namespace std;

int main(){
  int a,b=0;
  double c=0;
  cin>>a;
  cin>>b;
  cin>>c;
  double SALARY = b*c;
  cout<<fixed;
  cout.precision(2);
  cout<<"NUMBER = "<<a<<endl;
  cout<<"SALARY = U$ "<<SALARY<<endl;
  return 0;
}
