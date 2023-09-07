// CodeForces - 344A
#include <bits/stdc++.h>

using namespace std;

vector<string> all_mags;

int main(){
    int n;
    cin>>n;
    string mag;
    for(int i=0; i<n; i++) {
        cin>>mag;
        all_mags.push_back(mag);
    }
    int group_count=1;
    string current_group = all_mags[0];
    for(int i=0; i<n; i++){
        if(all_mags[i] != current_group) {
            group_count++;
            current_group = all_mags[i];
        }
    }
    cout<<group_count<<endl;
}