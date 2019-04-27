
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define MAXN 110
int max_sum(vector<int> &s){
    int resp=0,maior=0;
    for(int i=0;i<s.size();i++){
        maior=max(0,maior+s[i]);
        resp= max(resp,maior);
    }
    return resp;

}
int main(){
    int n,l;
    vector<int> p;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>l;
        p.push_back(l);

    }
    cout<<max_sum(p)<<endl;

}
