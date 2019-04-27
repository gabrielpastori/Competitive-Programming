#include <iostream>
#include <stack>
using namespace std;
#define MAX 100100

int main(){
    char pilha[MAX],num;
    int topo,n,d,apagados;
    while(cin>>n>>d && (n+d)){
        apagados=0;
        topo=-1;
        for (int i=0;i<n;i++){

            cin>>num;
            while(topo>-1 && apagados<d && num>pilha[topo]){
                topo--;

                apagados++;

            }
            if(topo+1<n-d) pilha[++topo]=num;
        }
        pilha[++topo]='\0';
        cout<<pilha<<endl;
    }


}
