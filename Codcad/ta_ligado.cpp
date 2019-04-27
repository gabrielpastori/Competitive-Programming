#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    vector<int> v[100100];
    int m,n,t,a,b,k=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>t>>a>>b;
        if(t==1){
            v[a].push_back(b); 
            v[b].push_back(a); 
        }
        if(t==0){
            for (int i=0;i<v[a].size();i++){  
                if(v[a][i]==b){  
                    k=1;  
                    break;
                }
 
            }
            if(k==1){
                cout<<1<<endl;
            }else{
                cout<<0<<endl;
            }
            k=0;
        }
    }
}
