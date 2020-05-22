#include <iostream>
using namespace std;
int main(){
    int c,a,cont=0;
    cin>>c>>a;
    while (a>0){
       a-=c-1;
       cont+=1;
    }
    cout<<cont<<endl;


}
