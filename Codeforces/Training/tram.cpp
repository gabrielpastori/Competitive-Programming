#include <iostream>

using namespace std;

int main(){
    int n,a,b,t=0,maxi=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        t-=a;
        t+=b;
        maxi=max(maxi,t);
    }
    cout<<maxi<<endl;

}