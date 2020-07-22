//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1010
#include <iostream>
using namespace std;

int main(){
  double R=0;
  cin>>R;
  double vol=(4/3.0)*3.14159*R*R*R;
  cout<<fixed;
  cout.precision(3);
  cout<<"VOLUME = "<<vol<<endl;
  return 0;
}