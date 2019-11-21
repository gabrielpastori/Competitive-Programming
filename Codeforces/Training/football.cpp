#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool ok=1;
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            a=0;
            b++;
        }else{
            a++;
            b=0;
        }
        if(a==7 or b==7){
            ok=0;
            break;
        }
    }
    if(ok) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}