#include <iostream>
#include <sstream>
using namespace std;
bool verifyLucky(int n){
    stringstream ss;
    ss<<n;
    string numberString;
    ss>>numberString;
    for(int i=0;i<numberString.size();i++){
        if(numberString[i]!='4' and numberString[i]!='7') return 0;
    }
    return 1;

}
int main(){
    int n;
    cin>>n;
    bool ok=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(verifyLucky(i)){
                ok=1;
                break;
            }
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}