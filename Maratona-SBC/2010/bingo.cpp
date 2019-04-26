#include <iostream>
using namespace std;
int pos(int x,int y){
  if(x-y<0){
    return -1*(x-y);
  }else{
    return x-y;
  }
}
int main(){
  while (true){
  int n,b,p;
  cin>>n>>b;
  if (n==0 && b==0){
    break;
  }
  int vet[n],vetor[b];
  for (int i=0;i<n+1;i++){
    if(i<b){
    cin>>vetor[i];
    }
    vet[i]=i;
  }

  for (int i=0;i<b;i++){
    for(int k=0;k<b;k++){
      int l=pos(vetor[i],vetor[k]);
      for (int m=0;m<n+1;m++){
        if(l==vet[m]){
          vet[m]=-3;
        }
      }
    }
  }
  for (int i=0;i<n+1;i++){
    if (vet[i]!=-3){
      cout<<"N"<<endl;
      break;
    }else{
      if (i==n){
        cout<<"Y"<<endl;
      }
    }

  }
}
return 0;
}
