#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int ca=0,cb=0;
    bool ok=1;
    for(int i=0;i<a.size();i++){
        ca+=tolower(a[i])-0;
        cb+=tolower(b[i])-0;
        if(ca<cb){
            cout<<"-1"<<endl;
            ok=0;
            break;
        }
        if(ca>cb){
            ok=0;
            cout<<"1"<<endl;
            break;
        }
    }
    if(ok) cout<<"0"<<endl;
    
}