#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 1100
vector<int> c;
int dp[MAXN];
bool troco(int t){
    if(t==0) return 1;
    if(t<0) return 0;
    for(int i=0;i<c.size();i++){
        if(troco(t-c[i])) return dp[t-c[i]]=1;


    }
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    int k;
    for(int i=0;i<n;i++){
        cin>>k;
        c.push_back(k);
    }
    cout<<(troco(m)?"S":"N")<<endl;
}
