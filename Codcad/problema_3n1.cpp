#include <iostream>
int cont=0;
using namespace std;
int prob(int n){
  if(n>1){
    cont+=1;
    if(n%2==0){
      return prob(n/2);
    }else{
      return prob(3*n+1);
    }
  }else{
    return cont;
  }
}
int main(){
  int n;
  cin>>n;
  cout<<prob(n);
}
