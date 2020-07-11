//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1005
#include <iostream>
using namespace std;

int main(){
  double A,B=0;
  cin>>A;
  cin>>B;
  double MEDIA=(A*3.5+B*7.5)/11;
  cout<<fixed;
  cout.precision(5);
  cout<<"MEDIA = "<<MEDIA<<endl;
  return 0;
}