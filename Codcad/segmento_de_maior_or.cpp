#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> p;
int max_or(vector<int> &s){
    int resp=0,maior=0;
    for(int i=0;i<s.size();i++){
        int l=resp;
        l|=s[i];
        resp = max(0,l);
        maior=max(maior,resp);

    }
    return maior;

}

int main(){
    int a;
    cin>>a;
    int k;
    for(int i=0;i<a;i++){
        cin>>k;
        p.push_back(k);
    }
    cout<<max_or(p)<<endl;
    
}
