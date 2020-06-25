//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include <iostream>
using namespace std;

int main(){
  int N=0,h=0,m=0;
  cin>>N;
  if (N>=60){
    while(N>=60){
        N-=60;
        m+=1;
    }
  }
  if(m>=60){
    while (m>=60){
      m-=60;
      h+=1;
    }
  }
  cout<<h<<":"<<m<<":"<<N<<endl;
  return 0;
}
