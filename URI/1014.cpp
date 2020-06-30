#include <iostream>
using namespace std;

int main(){
  int X= 0;
  double Y = 0;
  cin>>X;
  cin>>Y;
  cout<<fixed;
  cout.precision(3);
  cout<<X/(Y+0.0)<<" km/l"<<endl;


  return 0;
}
