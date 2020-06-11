//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1002
#include <iostream>
using namespace std;

int main(){
    double raio =0;
    cin>>raio;
    double A=raio*raio*3.14159;
    cout<<fixed;
    cout.precision(4);
    cout<<"A="<<A<<endl;

    return 0;
}