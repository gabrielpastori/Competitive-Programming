#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int largb,altb,aux;
    bool ok=0;
    for(int i=1;i<=b;i++){
        if(b%i==0){
            largb=i;
            altb=b/i;
            aux=(largb+2)*(altb+2)-b;
            if(aux==a){
                ok=1;
                break;
            }
        }
    }
    if(ok){
        cout<<min(largb+2,altb+2)<<" "<<max(largb+2,altb+2)<<endl;
    }else{
        cout<<"-1 -1"<<endl;
    }
}