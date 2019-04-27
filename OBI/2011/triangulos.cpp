#include <iostream>
using namespace std;
string resolve(int a,int b,int c){
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(a>=b+c){
        return "n";
    }
    if(a*a==b*b+c*c) return "r";
    if(a*a>b*b+c*c) return "o";
    if(a*a<b*b+c*c) return "a";


}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<resolve(a,b,c)<<endl;
}
