#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(){
    string s;
    cin>>s;
    int a;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            v.push_back(s[i]-48);
        }
    }
    sort(v.begin(),v.end());
    a=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            cout<<v[a];
            a++;
        }else{
            cout<<"+";
        }
    }
    cout<<endl;
}