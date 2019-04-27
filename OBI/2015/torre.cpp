#include <iostream>
using namespace std;
int main(){
  int n,vet[1010][1010],soma=0,maior=-1;
  cin>>n;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cin>>vet[i][j];
    }
  }
  int col[n],lin[n];
  for (int i=0;i<n;i++){
    soma=0;
    for (int j=0;j<n;j++){
      soma+=vet[j][i];
    }
    col[i]=soma;
  }
  for (int i=0;i<n;i++){
    soma=0;
    for (int j=0;j<n;j++){
      soma+=vet[i][j];
    }
    lin[i]=soma;
  }
  for (int i=0;i<n;i++){
    soma=0;
    for(int j=0;j<n;j++){
      soma=lin[i]+col[j]-2*vet[i][j];
      if (soma>maior){
        maior=soma;
      }
    }

  }
  cout<<maior<<endl;
  return 0;
}
