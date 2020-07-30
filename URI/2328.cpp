//Problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/2328
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>k;
        c+=(k-1);
    }
    cout<<c<<endl;
}