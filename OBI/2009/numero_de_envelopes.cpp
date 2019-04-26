#include <iostream>
using namespace std;
int main(){
  int n,menor,k;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>k;
    if (i==0){
      menor=k;
    }
    if (k<menor){
      menor=k;
    }
  }
  cout<<menor<<endl;
return 0;
}
