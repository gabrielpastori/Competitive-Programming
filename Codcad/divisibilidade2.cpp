#include <iostream>
#include <sstream>
using namespace std;
int verifica4(string num){
    if(((num[num.size()-1]-48)+2*(num[num.size()-2]-48))%4==0) return 1;
    return false;


}
int verifica9(string num){
    int cont=0;
    for(int i=0;i<num.size();i++){
        cont+=(num[i]-48);

    }
    if(cont%9==0) return 1;
    return 0;
}
int verifica25(string num){
    if(((num[num.size()-1]-48)+10*(num[num.size()-2]-48))%25==0) return 1;
    return false;
}
int main(){
    string num;
    cin>>num;
    int result;
    stringstream(num)>>result;
    if(result<10){
        num='0'+num;
    }
    if(verifica4(num)) cout<<"S"<<endl;
    else{
        cout<<"N"<<endl;
    }
    if(verifica9(num)) cout<<"S"<<endl;
    else{
        cout<<"N"<<endl;
    }
    if(verifica25(num)) cout<<"S"<<endl;
    else{
        cout<<"N"<<endl;
    }
}
