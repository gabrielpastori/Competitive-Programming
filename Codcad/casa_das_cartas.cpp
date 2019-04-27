#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  long long int n,m;
  pair <int,int>vet[100010];
  cin>>n>>m;
  for (int i=0;i<n;i++){
    cin>>vet[i].second;
    vet[i].first=vet[i].second%m;
  }
  sort(vet,vet+n);
  for (int i=n-1;i>=0;i--){
    cout<<vet[i].second<<" ";
  }




}
