#include <iostream>
#include <map>
using namespace std;
map<char,int> m;
int main(){
    string s;
    cin>>s;
    int count=s.size();
    for(int i=0;i<s.size();i++){
        if(m.find(s[i])!=m.end()){
            m[s[i]]++;
            count--;
        }else{
            m[s[i]]=1;
            
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
   
    
}