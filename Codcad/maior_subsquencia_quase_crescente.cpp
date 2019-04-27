#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#define MAXN 1010

using namespace std;
int lsc(vector<int> &v){
    vector<int> pilha;
    for(int i=0;i<v.size();i++){
        vector<int>::iterator it = upper_bound(pilha.begin(),pilha.end(),v[i]);
        if(it==pilha.end()) pilha.push_back(v[i]);
        else *it=v[i];

    }
    return pilha.size();


}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);

    }
    cout<<lsc(v)<<endl;

}
