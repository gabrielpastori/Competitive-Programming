#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int ca=0,cb=0;
    for(int i=0;i<a.size();i++){
        ca+=tolower(a[i])-0;
    }
    for(int i=0;i<b.size();i++){
        cb+=tolower(b[i])-0;
    }
    if(ca<cb) cout<<"-1"<<endl;
    
    if(ca==cb) cout<<"0"<<endl;

    if(ca>cb) cout<<"1"<<endl;
}