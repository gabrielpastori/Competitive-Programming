#include <iostream>
using namespace std;
int main(){
    int n,cont=0;
    cin>>n;
    cont+=n/100;
    cont+=n%100/50;
    cont+=n%100%50/25;
    cont+=n%100%50%25/10;
    cont+=n%100%50%25%10/5;
    cont+=n%100%50%25%10%5;
    cout<<cont<<endl;
}
