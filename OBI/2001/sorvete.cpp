#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int w,s,u,v;
    pair<int,int> p[5050];
    cin>>w>>s;
    for(int i=0;i<s;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+s);
    int ini=p[0].first,fim=p[0].second;
    for(int i=1;i<s;i++){
        if(p[i].first<=fim){
            fim=max(p[i].second,fim);
        }else{
            cout<<ini<<" "<<fim<<endl;
            ini=p[i].first;
            fim=p[i].second;
        }
    }
    cout<<ini<<" "<<fim<<endl;



}
