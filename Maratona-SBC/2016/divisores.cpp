#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> p;
    for(int i=1;i<=sqrt(c);i++){
        if(c%i==0){
            p.push_back(c/i);
            p.push_back(i);


        }

    }
    int k=-1;
    sort(p.begin(),p.end());
    for(int i=0;i<p.size();i++){
        if(p[i]%a==0 and p[i]%b!=0 and d%p[i]!=0){
            k=p[i];
            break;

        }

    }
    cout<<k<<endl;
}
