#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int res=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='+' or s[2]=='+'){
            res++;
        }
        if(s[0]=='-' or s[2]=='-'){
            res--;
        }
    }
    cout<<res<<endl;
}