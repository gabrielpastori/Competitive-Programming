#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned long long int n,m,a;
    cout<<fixed;
    cout.precision(0);
    cin>>n>>m>>a;
    cout<<(ceil((n*1.0)/a))*(ceil((m*1.0)/a))<<endl;
}