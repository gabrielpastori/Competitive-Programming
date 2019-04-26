#include <iostream>
using namespace std;
int main(){
  int n,k,maior=0,cont=1,mar;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>k;
    if (i==0){
      mar=k;
      continue;
    }
    if(k==mar){
      cont+=1;
    }else{
      mar=k;
      cont=1;
    }
    if (cont>maior){
      maior=cont;
    }
  }
cout<<maior<<endl;
return 0;
}
