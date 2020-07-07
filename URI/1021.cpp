//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1021
#include <iostream>

using namespace std;

int main(){
  float valor=0;
  cin>>valor;
  int inteiro=valor/1;
  int moedas = 100*(valor - inteiro);
  float moedas1 = 100*(valor - inteiro);
  cout<<"NOTAS:"<<endl;
  cout<<inteiro/100<<" nota(s) de R$ 100.00"<<endl;
  inteiro%=100;
  cout<<inteiro/50<<" nota(s) de R$ 50.00"<<endl;
  inteiro%=50;
  cout<<inteiro/20<<" nota(s) de R$ 20.00"<<endl;
  inteiro%=20;
  cout<<inteiro/10<<" nota(s) de R$ 10.00"<<endl;
  inteiro%=10;
  cout<<inteiro/5<<" nota(s) de R$ 5.00"<<endl;
  inteiro%=5;
  cout<<inteiro/2<<" nota(s) de R$ 2.00"<<endl;
  inteiro%=2;
  cout<<"MOEDAS:"<<endl;
  if (inteiro==1){
    cout<<"1 moeda(s) de R$ 1.00"<<endl;
    inteiro=0;
    }else{
    cout<<"0 moeda(s) de R$ 1.00" <<endl;
  }
  cout<<moedas/50<<" moeda(s) de R$ 0.50"<<endl;
  moedas1=moedas1 - (moedas/50)*50;
  moedas%=50;

  cout<<moedas/25<<" moeda(s) de R$ 0.25"<<endl;
  moedas1=moedas1 - (moedas/25)*25;
  moedas%=25;
  cout<<moedas/10<<" moeda(s) de R$ 0.10"<<endl;
  moedas1=moedas1 - (moedas/10)*10;
  moedas%=10;

  cout<<moedas/5<<" moeda(s) de R$ 0.05"<<endl;
  moedas1=moedas1 - (moedas/5)*5;
  moedas%=5;
  cout<<fixed;
  cout.precision(0);
  if (moedas1 == 0){
    cout<<"0 moeda(s) de R$ 0.01"<<endl;
  }else{
    cout<<(moedas1)<<" moeda(s) de R$ 0.01"<<endl;
    moedas%=1;
  }




  return 0;
}