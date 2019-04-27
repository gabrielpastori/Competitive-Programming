#include <bits/stdc++.h>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

#define PB push_back
#define MAXN 100100
int lc[MAXN],ld[MAXN];
int cresc(vector<int> &v){
    vector<int> pilha;
    for(int i=0;i<v.size();i++){
        vector<int>:: iterator it=lower_bound(pilha.begin(),pilha.end(),v[i]);
        if(it==pilha.end()) pilha.push_back(v[i]);
        else *it=v[i];
        lc[i]=pilha.size();
        

    }


}
int decresc(vector<int> &v){
    reverse(v.begin(),v.end());
    vector<int> pilha;
    for(int i=0;i<v.size();i++){
        vector<int>:: iterator it=lower_bound(pilha.begin(),pilha.end(),v[i]);
        if(it==pilha.end()) pilha.push_back(v[i]);
        else *it=v[i];
        ld[v.size()-1-i]=pilha.size();
        

    }

}

int main(){


    int n;
    cin>>n;
    vector<int> v;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        v.push_back(k);

    }
    cresc(v);
    decresc(v);
    int maior=0;
    for(int i=0;i<n;i++){
        maior=max(maior,2*min(lc[i],ld[i])-1);

    }

    cout<<maior<<endl;
}
