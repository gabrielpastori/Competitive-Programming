#include <iostream>
using namespace std;

int main(){
  double a,b,c,d,e,maior;
  cin>>a>>b>>c>>d>>e;
  maior=a;
  if (b>maior){
    maior=b;
  }
  if (c>maior){
    maior=c;
  }
  if (d>maior){
    maior=d;
  }
  if (e>maior){
    maior=e;
  }
  double menor=a;
  if (b<menor){
    menor=b;
  }
  if (c<menor){
    menor=c;
  }
  if (d<menor){
    menor=d;
  }
  if (e<menor){
    menor=e;
  }
  cout<<fixed;
  cout.precision(1);
  cout<<a+b+c+d+e-maior-menor<<endl;

  return 0;
}
