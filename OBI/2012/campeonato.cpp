#include <iostream>
using namespace std;
int main(){
  int cv,ce,cs,fv,fe,fs,sc,sf;
  cin>>cv>>ce>>cs>>fv>>fe>>fs;
  sc=cv*3 + ce;
  sf=fv*3 + fe;
  if (sc>sf){
    cout<<"C"<<endl;
  }else{
    if (sc<sf){
      cout<<"F"<<endl;
    }else{
      if (cs>fs){
        cout<<"C"<<endl;
      }else{
        if(cs<fs){
          cout<<"F"<<endl;
        }else{
          cout<<"="<<endl;
        }
      }
    }
  }
  return 0;
}
