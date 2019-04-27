#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  long long int n,vet[100010],cont=0,aux[100010],v[100010],j=0;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>vet[i];
    aux[i]=vet[i];
  }
  sort(vet,vet+n);
  for (int i=0;i<n;i++){
    if (aux[i]!=vet[i]){
      cont+=1;
      v[j]=vet[i];
      j++;
    }
  }
  cout<<cont<<endl;
  for (int i=0;i<cont;i++){
    cout<<v[i]<<" ";
  }

}
