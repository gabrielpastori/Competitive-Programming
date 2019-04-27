#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  long long int n,m,vet[110],soma=0;
  cin>>n>>m;
  pair <int,int>aux[110];
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      cin>>vet[j];
      soma+=vet[j];
    }
    aux[i].first=soma;
    aux[i].second=i+1;
    soma=0;
  }
  sort(aux,aux+n);
  for (int i=0;i<3;i++){
    cout<<aux[i].second<<endl;
  }


}
