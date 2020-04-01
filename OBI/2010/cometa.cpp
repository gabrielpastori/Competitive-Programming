#include <iostream>

using namespace std;

int main(){
    int a,k;
    cin>>a;
    k=1986;
    while(true){
        k+=76;
        if(k>a) break;
    }
    cout<<k<<endl;

}