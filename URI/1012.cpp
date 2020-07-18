//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1012
#include <iostream>
using namespace std;

int main(){
  double A,B,C=0;
  cin>>A>>B>>C;
  double t = A*C/2;
  double ci = 3.14159*C*C;
  double tr =(A+B)*C/2;
  double q = B*B;
  double r = A*B;
  cout<<fixed;
  cout.precision(3);
  cout<<"TRIANGULO: "<<t<<endl;
  cout<<"CIRCULO: "<<ci<<endl;
  cout<<"TRAPEZIO: "<<tr<<endl;
  cout<<"QUADRADO: "<<q<<endl;
  cout<<"RETANGULO: "<<r<<endl;
  return 0;
}
