#include <iostream>
using namespace std;
int dis(int p,int h,int d){
  int dp0=0;
  if (d==1){
    for(p;p!=h;p++){
      if (p==16){
        p=0;
        if (p==h){
          break;
        }
      }
      dp0+=1;
     }
  }

  if (d==-1){
    for(p;p!=h;p--){
     if (p==-1){
       p=15;
       if (p==h){
          break;
       }
     }
     dp0+=1;
  }
  }

  return dp0;
}
int main(){
  int h,p,f,d,menor;
  cin>>h>>p>>f>>d;
  if (dis(f,h,d)>=dis(p,h,d)){
    cout<<"N";
  }else{
    cout<<"S";
  }

  return 0;
}
