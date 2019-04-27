#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int mdc(int a,int b){
    return (b==0 ? a:mdc(b,a%b));

}
int main(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int g=mdc(a,b);
    for(int i=2;i<n;i++){
        cin>>a;
        g=mdc(g,a);
    }
    cout<<g<<endl;

}
