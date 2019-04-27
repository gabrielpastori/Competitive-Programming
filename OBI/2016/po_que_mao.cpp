#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  int n,x,vet[3],cont=0,aux=0;
  cin>>n;
  cin>>vet[0];
  cin>>vet[1];
  cin>>vet[2];
  sort(vet,vet+3);
  for (int i=0;i<3;i++){
    if (cont+vet[i]<=n){
      cont+=vet[i];
      aux+=1;
    }
  }
  cout<<aux<<endl;




}
