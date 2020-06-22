//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1084
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n,d;
    while(cin>>n>>d and n!=0 and d!=0){
        char digito;
        int convert,apagados=0;
        stack<int> pilha;        
        for(int i=0;i<n;i++){
            cin>>digito;
            
            convert=digito-48;
            
            if(pilha.size()>0){
                while(pilha.size()>0 and pilha.top()<convert and apagados<d){
                   
                    pilha.pop();
                    
                    apagados++;
                }
                
                
            }
            if(pilha.size()<(n-d))pilha.push(convert);
                
            
            
        
        }
        int t=pilha.size();
        string resp="";
        
        for(int i=0;i<(int)t;i++){
            resp+=char(pilha.top()+48);
            pilha.pop();
        }
        
        for(int i=resp.size()-1;i>=0;i--){
            cout<<resp[i];
        }
        cout<<endl;
    }

}