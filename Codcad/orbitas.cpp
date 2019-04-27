#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long int mdc(long long int a,long long int b){
    return (b==0 ? a:mdc(b,a%b));

}
int main(){
    long long int a,b;
    cin>>a>>b;    
    cout<<(a*b)/mdc(max(a,b),min(a,b))<<endl;
}
