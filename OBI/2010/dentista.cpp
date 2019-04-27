#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,x,y;
    vector<pair<int,int> > p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        p.push_back(make_pair(y,x));

    }
    sort(p.begin(),p.end());
    int disp=0,cont=0;
    for(int i=0;i<n;i++){
        if(p[i].second>=disp){
            cont+=1;
            disp=p[i].first;
        }
    }
    cout<<cont<<endl;



}

