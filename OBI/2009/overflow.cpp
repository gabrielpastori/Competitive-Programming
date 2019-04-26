
#include <iostream>
using namespace std;
int main(){
  int n,p,q;
  char c;
  cin>>n;
  cin>>p>>c>>q;
  if(c=='+'){
    if (p+q<=n){
      cout<<"OK"<<endl;
    }else{
      cout<<"OVERFLOW"<<endl;
    }
  }
  if (c=='*'){
    if(p*q<=n){
      cout<<"OK"<<endl;
    }else{
      cout<<"OVERFLOW"<<endl;
    }
  }

return 0;
}
