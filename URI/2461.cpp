#include <iostream>
 #include <set>
using namespace std;
int n,m;
set<int> a,b;
bool soma(int l){
    int res;
    for(set<int>::iterator it=b.begin();it!=b.end();it++){
        res=l-*it;
        if(b.find(res)!=b.end()) return 1;
    }
    return 0;
}
int main(){
    int k;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>k;
        a.insert(k);
    }
    bool ok=1;
    int res;
    for(int i=0;i<m;i++){
        cin>>k;
        if(a.find(k)==a.end() and !soma(k) and ok){
            ok=0;
            res=k;
        }
        b.insert(k);
    }
    if(!ok) cout<<res<<endl;
    else cout<<"sim"<<endl;
} 