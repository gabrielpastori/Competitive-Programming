#include <iostream>

using namespace std;

int main(){
    string s,aux="";
    cin>>s;
    bool change=0,ok=1;
    for(int i=0;i<s.size();i++){
        aux+=char(toupper(s[i]));
    }
    if(aux==s) change=1;
    aux=s[0];
    for(int i=1;i<s.size();i++){
        aux+=char(toupper(s[i]));
    }
    if(aux==s) change=1;
    
    if(change){
        aux="";
        for(int i=0;i<s.size();i++){
            if(islower(s[i])){
                aux+=char(toupper(s[i]));
            }else{
                aux+=char(tolower(s[i]));
            }
        }
        cout<<aux<<endl;
    }else{
        cout<<s<<endl;
    }
    
    
}
