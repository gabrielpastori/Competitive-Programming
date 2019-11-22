#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string aux="";
    aux+=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        aux+=s[i];
    }
    cout<<aux<<endl;

}