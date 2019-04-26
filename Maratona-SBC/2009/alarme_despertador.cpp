#include <iostream>
using namespace std;
int main(){
  string sai;
  int a,b,c,d,j=0,vetor[100],x=0;
  while(cin>>a>>b>>c>>d){
    if(a==0 && b==0 && c==0 && d==0){
      break;
    }
    int m1=60*a+b;
    int m2=60*c+d;
    if (m2<m1){
      j=1440-m1+m2;
    }else{
      j=m2-m1;
    }
    cout<<j<<endl;
  }

return 0;
}
