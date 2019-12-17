#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool ok=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9') ok=1;
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}