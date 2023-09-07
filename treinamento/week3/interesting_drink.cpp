// CodeForces - 706B
#include <bits/stdc++.h>

using namespace std;
#define MAXN 100100
int x[MAXN], m[MAXN], coun[MAXN], cum_count[MAXN];
int main(){
    int n, max_xi=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
        coun[x[i]]++;
        max_xi = max(max_xi, x[i]);
    }
    cum_count[0] = coun[0];
    for(int i=1; i<=max_xi; i++){
        cum_count[i] = cum_count[i-1] + coun[i];
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>m[i];
        m[i] = min(m[i], max_xi);
        cout<<cum_count[m[i]]<<endl;
    }


}