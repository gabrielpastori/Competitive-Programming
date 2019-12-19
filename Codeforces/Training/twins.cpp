#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
bool sorteia(int a,int b){
    return a>b;
}
int main(){
    int n,s=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),sorteia);
    int sum=0,c=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        c++;
        if(sum>(s/2)) break;
    }
    cout<<c<<endl;
}