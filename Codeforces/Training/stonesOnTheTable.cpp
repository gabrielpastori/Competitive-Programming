#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }
    cout<<c<<endl;
}