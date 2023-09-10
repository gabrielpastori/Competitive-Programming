// CodeForces - 1092D1

#include <bits/stdc++.h>

using namespace std;
#define MAXN 200100
int a[MAXN];
int main(){
    int n, ai;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>ai;
        ai &= 1;
        a[i] = ai;
    }
    vector<int> st;
    for(int i=0; i<n; i++){
        if(!st.empty() and a[i] == st.back()){
            st.pop_back();
        }else {
            st.push_back(a[i]);
        }
    }
    cout<<(st.size()>1? "NO": "YES")<<endl;
}