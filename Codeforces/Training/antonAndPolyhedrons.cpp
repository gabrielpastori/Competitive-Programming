#include <iostream>

using namespace std;

int main(){
    int n,t=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron")t+=4;
        if(s=="Cube")t+=6;
        if(s=="Octahedron")t+=8;
        if(s=="Dodecahedron")t+=12;
        if(s=="Icosahedron")t+=20;

    }
    cout<<t<<endl;
}