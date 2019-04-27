#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    string str;
    stack<char> s;
    bool result;
    cin>>n;
    while (n--){
        cin>>str;
        result=true;
        for(int i=0;i<str.size();i++){
            if (str[i]=='(' or str[i]=='[' or str[i]=='{'){
                s.push(str[i]);
            }else{
                if(s.empty()){
                    result=false;
                    break;
                }
                char match = s.top();
                s.pop();
                if((str[i]==')' && match != '(') || (str[i]==']' && match != '[')|| (str[i]=='}' && match != '{')){
                    result=false;
                    break;
                }
            }
        }
        if(!s.empty()){
            result=false;
            while (!s.empty()){
                s.pop();
            }
        }
        if(result){
            cout<<"S"<<endl;
        }else{
            cout<<"N"<<endl;
        }
    }
}
