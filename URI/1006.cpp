//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1006
#include <iostream>
using namespace std;

int main(){
  double A,B,C=0;
  cin>>A;
  cin>>B;
  cin>>C;
  double MEDIA=(A*2+B*3+C*5)/10;
  cout<<fixed;
  cout.precision(1);
  cout<<"MEDIA = "<<MEDIA<<endl;
  return 0;
}
