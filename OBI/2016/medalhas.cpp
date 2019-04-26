#include <iostream>
using namespace std;
int maior(int a,int b){
  if (a>b){
    return a;
  }else{
    return b;
  }
}
int menor (int a,int b){
  if (a>b){
    return b;
  }else{
    return a;
  }
}
int main(){
  int a,b,c,maior1,maior2,medio,menor1,menor2;
  cin>>a;
  cin>>b;
  cin>>c;
  maior1=maior(a,b);
  menor1=menor(a,b);
  maior2=maior(maior1,c);
  menor2=menor(menor1,c);
  medio=a+b+c-maior2-menor2;
  if (menor2==a){
    cout<<"1"<<endl;
  }
  if (menor2==b){
    cout<<"2"<<endl;
  }
  if (menor2==c){
    cout<<"3"<<endl;
  }

  if (medio==a){
    cout<<"1"<<endl;
  }
  if (medio==b){
    cout<<"2"<<endl;
  }
  if (medio==c){
    cout<<"3"<<endl;
  }
  if (maior2==a){
    cout<<"1"<<endl;
  }
  if (maior2==b){
    cout<<"2"<<endl;
  }
  if (maior2==c){
    cout<<"3"<<endl;
  }

  return 0;
}
