#include <bits/stdc++.h>
using namespace std;

int main()
{
	int c;
	cin>>c;
	string k,aux;
	stack<char> pilha;
	bool ok=1;
	for(int i=0;i<=c;i++){
        getline(cin,k);
        for(int j=0;j<k.size();j++){
            if(k[j]=='{'){
                pilha.push('{');
            }
            if(k[j]=='}'){
                if(pilha.empty()){
                    ok=false;
                }else{
                    pilha.pop();
                }
            }
        }
	}


	if(!pilha.empty()){
        ok=false;
	}
	if(ok){
        cout<<"S"<<endl;
	}else{
        cout<<"N"<<endl;
	}
}
