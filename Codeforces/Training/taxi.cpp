/*
    NEED TO REVIEW STEM
 */
#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 100100
bool sorteia(int a,int b){
    return a>b;
}
int main(){
    int n,v[MAXN];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v,v+n,sorteia);
    int taxis=0,sum=0,in=0;
    for(int i=0;i<n;i++){
        while(v[i]!=0){
            in=min(v[i],4-sum);
            sum += in;
            v[i]-=in;
            if(sum==4){
                taxis++;
                sum=0;
            }

        }
    }
    if(sum>0) taxis++;
    cout<<taxis<<endl;
}