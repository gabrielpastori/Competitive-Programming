#include <iostream>
#include <cmath>
using namespace std;
bool primo(long long int n){
    if(n==1){ return 0;}
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    long long int n;
    cin>>n;
    if(primo(n)) cout<<"S"<<endl;
    else{
        cout<<"N"<<endl;
    }
}
