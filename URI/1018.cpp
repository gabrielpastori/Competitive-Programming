#include <iostream>
using namespace std;

int main(){
  int a=0,n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
  cin>>a;
  cout<<a<<endl;
  while (a!=0){
    if(a>=100){
      while (a>=100){
        a-=100;
        n100+=1;
      }
    }
    if(a>=50){
      while (a>=50){
        a-=50;
        n50+=1;
      }
    }
    if(a>=20){
      while (a>=20){
        a-=20;
        n20+=1;
      }
    }
    if(a>=10){
      while (a>=10){
        a-=10;
        n10+=1;
      }
    }
    if(a>=5){
      while (a>=5){
        a-=5;
        n5+=1;
      }
    }
    if(a>=2){
      while (a>=2){
        a-=2;
        n2+=1;
      }
    }
    if(a>=1){
      while (a>=1){
        a-=1;
        n1+=1;
      }
    }
  }
  cout<<n100<<" nota(s) de R$ 100,00"<<endl;
  cout<<n50<<" nota(s) de R$ 50,00"<<endl;
  cout<<n20<<" nota(s) de R$ 20,00"<<endl;
  cout<<n10<<" nota(s) de R$ 10,00"<<endl;
  cout<<n5<<" nota(s) de R$ 5,00"<<endl;
  cout<<n2<<" nota(s) de R$ 2,00"<<endl;
  cout<<n1<<" nota(s) de R$ 1,00"<<endl;
  return 0;
}