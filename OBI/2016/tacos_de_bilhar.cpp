#include <iostream>
#include <set>
using namespace std;
#define MAX 100100

int main(){
    int c,k,cont=0;
    cin>>c;
    set<int> estoque;
    for(int i=0;i<c;i++){
        cin>>k;
        if(estoque.find(k)==estoque.end()){
            cont+=2;
            estoque.insert(k);

        }else{
            estoque.erase(k);
        }
    }
    cout<<cont<<endl;







}
