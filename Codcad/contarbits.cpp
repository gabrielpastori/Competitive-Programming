#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <algorithm>

using namespace std;

int count(int x){
  int resp=0;
  while(x!=0){
    resp++;
    x-=x&-x;


  }
  return resp;
}

int main(){
    int n;
    cin>>n;

    cout<<count(n)<<endl;
    
}
