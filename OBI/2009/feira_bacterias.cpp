#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,q,d;
    double maior=-1,sai;
    cin>>n;
    for (int i=0;i<n;i++){
      cin>>q>>d;
      if (log10(q)*d>maior){
        maior=log10(q)*d;
        sai=i;
      }
    }
    cout<<sai<<endl;
    return 0;
}
