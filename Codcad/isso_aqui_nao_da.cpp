#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 10100
vector<int> c;
int dp[MAXN];
bool troco(int t){
    if (t==0) return 1;
    if(t<0) return 0;
    for(int i=0;i<c.size();i++){
        if(troco(t-c[i])) return dp[t-c[i]]=1;

    }
    return dp[t]=0;


}
int main(){
    memset(dp,0,sizeof(dp));
    int n,m,k;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k;
        c.push_back(k);
    }
    int w=0;
    for(int i=1;i<m;i++){
        if(troco(i)) w++;
    }
    cout<<m-w-1<<endl;
}
