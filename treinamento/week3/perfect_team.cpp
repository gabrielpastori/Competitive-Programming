// CodeForces - 1221C
#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;
    long long int c,m,x;
    long long int soma = 0LL;
    for(int i=0; i<q; i++){
        cin>>c>>m>>x;
        soma = min(c,m);
        if (x < soma){
            soma = min((x+c+m)/3, soma);
        } else {
            x +=  (c - soma) + (m - soma);
            soma = min(soma, x);
        }
        cout<<soma<<endl;
    }
}