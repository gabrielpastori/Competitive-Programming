#include <iostream>
using namespace std;
int main(){
  int n,p,x,y,k=0,o=0;
  cin>>n>>p;
  while(k<n){
    cin>>x>>y;
    if (x+y>=p){
      o+=1;
    }
    x=0;
    y=0;
    k+=1;
  }
  cout<<o<<endl;
  return 0;
}
