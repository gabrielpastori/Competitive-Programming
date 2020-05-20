#include <iostream>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int k;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>k;
        res+=k;
    }
    cout<<res<<endl;
} 