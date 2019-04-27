#include <iostream>
#include <cmath>
using namespace std;
bool primo(long long int n){
    if(n==1) return 1;
    if(n==2) return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;

    }
    return 1;

}
int main(){
    long long int n;
    cin>>n;
    cout<<(primo(n) ? "N":"S")<<endl;
    
}
