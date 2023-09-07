// CodeForces - 978C
#include <bits/stdc++.h>

typedef long long int lli;
using namespace std;
vector<lli> number_of_rooms;
int main(){
    int n,m;
    cin>>n>>m;
    lli a, b;
    lli max_value = 0;
    lli sum_a = 0LL;
    number_of_rooms.push_back(0);
    for(int i=0;i<n;i++){
        cin>>a;
        sum_a += a;
        number_of_rooms.push_back(sum_a);
    }
    for(int i=0; i<m; i++){
        cin>>b;
        if(b > sum_a) {
            cout<<n<<" "<<b-number_of_rooms[n]<<endl;
            continue;
        }
        vector<lli>::iterator it = lower_bound(number_of_rooms.begin(), number_of_rooms.end(), b);
        cout<<it-number_of_rooms.begin()<<" "<<b-number_of_rooms[it-number_of_rooms.begin()-1]<<endl;
    }
}