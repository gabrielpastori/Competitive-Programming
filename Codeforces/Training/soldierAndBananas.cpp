#include <iostream>

using namespace std;

int main(){
    int k,n,w,c=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        c+=i*k;
    }
    cout<<max(0,(c-n))<<endl;

}