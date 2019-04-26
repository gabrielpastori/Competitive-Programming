#include <iostream>
using namespace std;
int main(){
  int soma=0,d=0,k,n;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>k;
    soma+=k;
    if (soma-k<1000000 ){
      d+=1;
    }

  }
cout<<d<<endl;
return 0;
}
