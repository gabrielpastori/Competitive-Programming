// CodeForces - 1092D2

#include <bits/stdc++.h>

using namespace std;
#define MAXN 200100
int a[MAXN];
int main(){
    int n, ai;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>ai;
        a[i] = ai;
    }
    int mx = *max_element(a, a+n);
    vector<int> st;
    for(int i=0; i<n; i++){
        if(!st.empty() && st.back() == a[i]) {
            st.pop_back();
        }
        else if (st.empty() || st.back() > a[i]) {
            st.push_back(a[i]);
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(st.empty()) {
        cout<<"YES"<<endl;
        return 0;
    }
    if (st.size() == 1 and st[0] == mx){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}