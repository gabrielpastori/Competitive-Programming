#include <iostream>

using namespace std;
char result(int n){
    if(n==0) return 'E';
    if(n<=35) return 'D';
    if(n<=60) return 'C';
    if(n<=85) return 'B';
    if(n<=100) return 'A';

}
int main(){
    int n;
    cin>>n;
    cout<<result(n)<<endl;

}