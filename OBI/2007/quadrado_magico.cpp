#include <iostream>
using namespace std;

int main(){
  int a[20][20];
  int ant=0,n,soma=0;
  cin>>n;
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }
  for (int i=0;i<n;i++){
    ant+=a[i][0];
  }
  for (int i=0;i<n;i++){
    soma=0;
    for (int j=0;j<n;j++){
      soma+=a[i][j];
    }
    if (soma!=ant){
      ant=-1;
      break;
    }
  }
  soma=0;
  int j=0;
  for (int i=0;i<n;i++){
    soma+=a[i][j];
    j+=1;
  }
  if (soma!=ant){
    ant=-1;
  }
  soma=0;
  j=n-1;
  for (int i=0;i<n;i++){
    soma+=a[i][j];
    j--;
  }
  if (soma!=ant){
    ant=-1;
  }

  cout<<ant<<endl;
  return 0;
}
