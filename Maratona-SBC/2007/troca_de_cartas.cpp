#include <iostream>
#include <set>
using namespace std;
#define MAX 100100

int main(){
    int a,b,k,conta=0,contb=0;
    cin>>a>>b;
    set<int> alice;
    set<int> beatriz;
    for(int i=0;i<a;i++){
        cin>>k;
        if(alice.find(k)==alice.end()){
            alice.insert(k);
        }
    }
    for(int i=0;i<b;i++){
        cin>>k;
        if(beatriz.find(k)==beatriz.end()){
            beatriz.insert(k);
        }
    }
    for(set<int>:: iterator it=alice.begin();it!=alice.end();it++){
        if(beatriz.find(*it)==beatriz.end()){
            conta+=1;
        }
    }
    for(set<int>:: iterator it=beatriz.begin();it!=beatriz.end();it++){
        if(alice.find(*it)==alice.end()){
            contb+=1;
        }
    }
    cout<<min(conta,contb)<<endl;









}
