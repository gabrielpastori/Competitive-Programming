#include <iostream>
#include <sstream>
using namespace std;
int verifica11(string num){
    int cont=num[0]-48;

    for(int i=1;i<num.size();i++){
        if(i%2!=0){
            cont+=10*(num[i]-48);
        }else{
            cont+=(num[i]-48);
        }
    
    }
    if(cont>1000000){
        string result;
        ostringstream convert;
        convert<<cont;
        result=convert.str();
        return verifica11(result);
    }

    if(cont%11==0) return 1;
    return 0; 
}
int main(){
    string num;
    cin>>num;
    if(verifica11(num)) cout<<"S"<<endl;
    else{cout<<"N"<<endl;}
}
