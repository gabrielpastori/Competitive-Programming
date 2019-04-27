#include <iostream>
#include <set>
using namespace std;
#define MAX 100100

int main(){
    int cont=0,n,k,vet[1000010];
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>k;
        if(s.find(k)!=s.end()){
            cont+=1;
        }
        s.insert(k);


    }
    cout<<n-cont<<endl;


}
