#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>c;
            if(c==1){
                a=i;
                b=j;
            }
        }

    }
    cout<<abs(a-3)+abs(b-3)<<endl;

}