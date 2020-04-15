#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
bool eprimo(long long int x){
 
    if(x==1 or x==2) return 1;
    for(long long int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
 
    }
    return 1;
}
int main(){
    long long int n;
    cin>>n;
    cout<<(eprimo(n)?"N":"S")<<endl;
}
 