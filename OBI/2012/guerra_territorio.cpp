#include <iostream>;
using namespace std;

int main(){
  int n,soma=0,loc=0,cont=0;
  cin>>n;
  int vetor[n];
  for (int i=1;i<=n;i++){
    cin>>vetor[i];
    soma+=vetor[i];
  }
  soma/=2;
  for (int i=1;i<=n;i++){
    if (loc==soma){
      break;
    }
    loc+=vetor[i];
    cont+=1;
  }
cout<<cont<<endl;
return 0;
}
