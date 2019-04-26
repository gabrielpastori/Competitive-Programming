#include <iostream>
using namespace std;
int main(){
  int n,t,ligadoate=0,acumulado=0;
  cin>>n;
  for(int i=0;i<n;i++){
     cin>>t;
     if (t>=ligadoate){
       acumulado+=10;
     }else{
       acumulado+=t+10-ligadoate;
     }
    ligadoate=t+10;

  }
cout<<acumulado<<endl;
return 0;
}
