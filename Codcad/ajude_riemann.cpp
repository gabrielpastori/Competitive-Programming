#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define MAXN 12000100
int n,composto[MAXN], cont=0,l=0,k;
void crivo(){
    composto[1]=1;
    for(int i=2;i<=n;i++){
        if(!composto[i]){
            
            if(l==k-1){
                cout<<i<<endl;
                break;

            }
            l+=1;
            cont+=1;
            for(int j=2;i*j<=n;j++){
                composto[i*j]=1;

            }
        }
    }

}
int main(){
    n=12000100;

    cin>>k;
    crivo();

    


}
