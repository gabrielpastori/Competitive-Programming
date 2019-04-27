#include <iostream>
using namespace std;

int main(){
  int n,cont=0;
  string g,m;
  cin>>n;
  cin>>g;
  cin>>m;
  for (int i=0;i<g.size();i++){
    if (g[i]==m[i]){
      cont+=1;
    }
  }
  cout<<cont<<endl;
  return 0;
}
