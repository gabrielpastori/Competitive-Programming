#include <iostream>
using namespace std;
int main(){
  int n,s,k,menor,soma=0;
  cin>>n>>s;
  cin>>k;
  soma+=k+s;
  menor=k+s;
  for(int i=0;i<n-1;i++){
    cin>>k;
    soma+=k;
    if (soma<menor){
      menor=soma;
    }
  }
cout<<menor;
return 0;
}
