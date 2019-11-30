#include <iostream>

using namespace std;


int main(){

    string s;
    cin>>s;
    bool h1=0,e=0,l1=0,l2=0,o=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h') h1=1;
        if(s[i]=='e' and h1) e=1;
        if(s[i]=='l' and e and !l1) {
            l1=1;
            continue;
        }
        if(s[i]=='l' and l1) l2=1;
        if(s[i]=='o' and l2) o=1;
        
    }
    if(h1 and e and l1 and l2 and o) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}