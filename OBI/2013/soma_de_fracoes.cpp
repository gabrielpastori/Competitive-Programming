#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long int mdc(long long int a,long long int b){
    return (b==0 ? a:mdc(b,a%b));

}
int main(){
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int mmc=b*d/mdc(max(b,d),min(b,d));
    long long int n=(mmc/b)*a + (mmc/d)*c;
    
    long long int md=mdc(n,mmc);
    while(mdc(max(n,mmc),min(n,mmc))!=1){
        n/=md;
        mmc/=md;
        md=mdc(max(n,mmc),min(n,mmc));
    }
    cout<<n<<" "<<mmc<<endl;
}
