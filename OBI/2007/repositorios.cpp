#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 100100

int main(){
    int c,n,k,j;
    cin>>c>>n;
    map<int,int> sis,novo;
    vector<pair<int,int> > v;
    for(int i=0;i<c;i++){
        cin>>k>>j;
        sis[k]=j;
    }
    for(int i=0;i<n;i++){
        cin>>k>>j;
        if(sis.find(k)!=sis.end()){
            if(sis[k]<j){
                novo[k]=j;
                sis[k]=j;
            }
        }else{
            novo[k]=j;
            sis[k]=j;
        }

    }
    for(map<int,int> :: iterator it =novo.begin();it!=novo.end();++it){
        v.push_back(make_pair(it->first,it->second));


    }
    sort(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;

    }







}
