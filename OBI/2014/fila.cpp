
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k,m;
    vector<int> e;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        e.push_back(k);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>k;
        for(int j=0;j<e.size();j++){
            if(e[j]==k){
                e.erase(e.begin()+j);
                break;
            }
        }
    }
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
}
