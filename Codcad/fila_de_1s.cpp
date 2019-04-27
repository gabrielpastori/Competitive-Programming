#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <algorithm>

using namespace std;

bool is_power_of_two(int x){
  if(x == 0)  return 0;
  return ((x&(x - 1)) == 0);
}

int main(){
    int n;
    cin>>n;

    if(is_power_of_two(n+1) and n!=0){
        cout<<"S"<<endl;

    }else{
        cout<<"N"<<endl;
    }
    
}
