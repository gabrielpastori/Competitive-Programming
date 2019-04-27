#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 1100
bool teste2(string n){
    if((n[n.size()-1]-48)%2==0) return 1;
    return 0;

}
bool teste3(string n){
    int cont=0;
    for(int i=0;i<n.size();i++){
        cont+=(n[i]-48);

    }
    if(cont%3==0) return 1;
    return 0;

}
bool teste5 (string n){
    if((n[n.size()-1]-48)%5==0) return 1;
    return 0;

}
int main(){
    string n;
    cin>>n;
    
    cout<<(teste2(n) ? "S":"N")<<endl;
    cout<<(teste3(n) ? "S":"N")<<endl;
    cout<<(teste5(n) ? "S":"N")<<endl;
    
}
