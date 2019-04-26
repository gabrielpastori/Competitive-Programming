#include <iostream>;
using namespace std;

int main(){
  int n;
  cin>>n;
  int vetor[n],fim[n];
  vetor[0]=5;
  fim[0]=5;
  for (int i=1;i<=n;i++){
    cin>>vetor[i];
    fim[i]=0;
  }
  for (int i=1;i<=n;i++){
    if (vetor[i]==1){
      fim[i]+=1;
    }
    if (vetor[i-1]==1){
      fim[i]+=1;
    }
    if (vetor[i+1]==1){
      fim[i]+=1;
    }

  }
  for (int i=1;i<=n;i++){
    cout<<fim[i]<<endl;
  }
return 0;
}
