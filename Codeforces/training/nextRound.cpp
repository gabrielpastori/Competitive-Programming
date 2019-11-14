#include <iostream>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int aux,minScore=1,cont=0;
    for(int i=1;i<=n;i++){
        cin>>aux;
        if(i==k) minScore=max(aux,minScore);
        if(aux>=minScore){
            cont++;
        }
    }
    cout<<cont<<endl;

}