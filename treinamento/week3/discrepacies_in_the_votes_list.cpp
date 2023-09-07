// CodeChef - VOTERS
#include <bits/stdc++.h>

using namespace std;
map<int, bool> voters_n1;
set<int> final_list;
int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int id;
    for(int i=0; i<n1; i++){
        cin>>id;
        voters_n1.insert(make_pair(id, true));
    }
    for(int i=0; i<(n2+n3); i++) {
        cin>>id;
        if(voters_n1[id]){
            final_list.insert(id);
        }
        voters_n1[id]=true;
    }
    cout<<final_list.size()<<endl;
    for(auto id: final_list){
        cout<<id<<endl;
    }
}