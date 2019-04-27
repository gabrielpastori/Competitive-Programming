
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long int mdc(long long int a,long long int b){
    return (b==0 ? a:mdc(b,a%b));

}
int main(){
    long long int n,m;
    cin>>n>>m;
    for(long long int i=m;i>0;i--){
        if(mdc(max(i,n),min(i,n))==1){
            cout<<i<<endl;
            break;

        }

    }    
}
