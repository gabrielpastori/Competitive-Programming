#include <iostream>
using namespace std;

int main(){
  while (true){
    char d;
    string n,j;
    cin>>d>>n;
    if (d=='0' && n=="0"){
      break;
    }
    int t=0;
    for (int i=0;i<n.size();i++){
      if (n[i]==d){
        n[i]='l';
      }
    }
    for (int i=0;i<n.size();i++){
      if (n[i]!='l'){
        t=1;
      }
    }
    if (t==0){
      cout<<'0'<<endl;
    }
    for (int i=0;i<n.size();i++){
      if (n[i]!='0' && n[i]!='l'){
        break;
      }
      if (n[i]=='0' && i!=n.size()-1){
        n[i]='l';
      }
    }
    for (int i=0;i<n.size();i++){
      if (n[i]=='l'){
        continue;
      }
      cout<<n[i];
    }

  }

  return 0;
}
