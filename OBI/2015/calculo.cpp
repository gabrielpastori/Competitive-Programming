#include <iostream>
using namespace std;
int main(){
  int m,n,maior,soma,sobra=0;
  cin>>m>>n;
  if (m>n){
    maior=m;
  }else{
    maior=n;
  }
  int vetorx[1000],vetory[1000],saida[1000];
  for (int i=0;i<m;i++){
    cin>>vetorx[i];
  }
  for (int i=0;i<n;i++){
    cin>>vetory[i];
  }
  for (int i=m;i<maior;i++){
    vetorx[i]=0;
  }
  for (int i=n;i<maior;i++){
    vetory[i]=0;
  }
  for (int i=maior-1;i>=0;i--){
    soma=vetorx[i]+vetory[i]+sobra;
    if (soma<=1){
      sobra=0;
    }else{
      sobra=1;
    }
    saida[i]= soma%2;
  }
  while(saida[maior-1]==0){
    maior--;
  }
  for (int i=0;i<maior;i++){
    cout<<saida[i]<<" ";
  }
return 0;
}
