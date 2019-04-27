#include <iostream>

using namespace std;
int fat(int n){
  if (n<2){
    return 1;
  }
  return n*fat(n-1);
}
int main(){
  int n;
  cin>>n;
  cout<<fat(n)<<endl;
}
