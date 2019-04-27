#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double k;
    cin>>n;
    cout<<fixed;
    cout.precision(4);
    for (int i=0;i<n;i++){
      cin>>k;
      cout<<pow(k,1.0/2)<<endl;
    }
    return 0;
}
