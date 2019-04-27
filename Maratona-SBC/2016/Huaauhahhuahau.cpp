#include <iostream>
using namespace std;

int main(){
  string ris;
  int nat[60],inv[60],t=0,k=0;
  cin>>ris;
  for (int i=0;i<ris.size();i++){
    if(ris[i]=='a' || ris[i]=='e' || ris[i]=='i' || ris[i]=='o' || ris[i]=='u'){
      nat[t]=ris[i];
      t++;
    }
  }
  t=0;
  for (int i=ris.size()-1;i>=0;i--){
    if(ris[i]=='a' || ris[i]=='e' || ris[i]=='i' || ris[i]=='o' || ris[i]=='u'){
      if (ris[i]!=nat[t]){
        k=1;
        break;
      }
      t++;
    }
  }
  if (k==1){
    cout<<"N"<<endl;
  }else{
    cout<<"S"<<endl;
  }
  return 0;
}
