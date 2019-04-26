#include <iostream>
using namespace std;
int main(){
  int b,n;
  int fundo[21];
  while (true){
    cin>>b>>n;
    if (b==0 && n==0 ){
      break;
    }
    for (int i=1;i<=b;i++){
      cin>>fundo[i];
    }
    for (int i=1;i<=n;i++){
      int d,c,v;
      cin>>d>>c>>v;
      fundo[d]-=v;
      fundo[c]+=v;
    }
    int ajuda=0;
    for (int i=1;i<=b;i++){
      if (fundo[i]<0){
        ajuda=1;
      }
    }
    if (ajuda==0){
      cout<<"S"<<endl;
    }else{
      cout<<"N"<<endl;
    }
  }

return 0;
}
