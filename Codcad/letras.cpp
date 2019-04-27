#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define MAXN 1010
using namespace std;
int msc(vector<int> &v){
    vector<int> pilha;
    for(int i=0;i<v.size();i++){
            vector<int>:: iterator it = upper_bound(pilha.begin(),pilha.end(),v[i]);
            if(it==pilha.end()) pilha.push_back(v[i]);
            else{*it=v[i];}


    }
    return pilha.size();

}
int main(){

    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.size();i++){
        v.push_back((s[i]-0));

    }
    cout<<msc(v)<<endl;

}
