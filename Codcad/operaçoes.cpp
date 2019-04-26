#include <iostream>
using namespace std;
int main(){
  char k;
  cin>>k;
  double a,b;
  cin>>a>>b;
  cout<<fixed;
  cout.precision(2);
  if (k=='M'){
    cout<<a*b<<endl;
  }else{
    cout<<a/b<<endl;
  }
return 0;
}
