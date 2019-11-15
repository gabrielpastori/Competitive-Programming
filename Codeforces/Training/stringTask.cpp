#include<bits/stdc++.h> 

using namespace std;

int main(){
    string s,res="",aux;
    cin>>s;
    aux=s;
    transform(aux.begin(), aux.end(), aux.begin(), ::toupper); 
    
    for(int i=0;i<s.size();i++){
        if(aux[i]=='A' or aux[i]=='O' or aux[i]=='Y' or aux[i]=='E' or aux[i]=='U' or aux[i]=='I'){
            continue;
        }
        if(aux[i]!='A' or aux[i]!='E' or aux[i]!='I' or aux[i]!='O' or aux[i]!='U'){
            res+='.';
        }
        if(s[i]!='A' or s[i]!='E' or s[i]!='I' or s[i]!='O' or s[i]!='U'){
            res+=tolower(s[i]);
        }
    }
    cout<<res<<endl;
}