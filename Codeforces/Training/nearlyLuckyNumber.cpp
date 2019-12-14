#include <iostream>
#include<sstream>  
using namespace std;
string isLucky(string s){
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4' or s[i]=='7') c++;
    }
    stringstream ss;
    ss<<c;
    string f;
    ss>>f;
    return f;
}
int main(){
    string n;
    cin>>n;
    cout<<isLucky(n)<<endl;
    

}