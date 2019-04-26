#include <iostream>
using namespace std;
int main(){
  int soma=0,c;
  char k;
  cin>>c;
  for (int i=0;i<c;i++){
    cin>>k;
    if (k=='P'){
      soma+=2;
    }
    if (k=='C'){
      soma+=2;
    }
    if (k=='A'){
      soma+=1;
    }
  }

cout<<soma;
return 0;
}

