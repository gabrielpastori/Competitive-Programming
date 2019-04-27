#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAXN 10010
struct tem{
    int dem,prazo;
};
bool sorteio(tem a,tem b){
    return a.prazo<b.prazo;

}
int main(){
    int n,pos=0;
    tem temp[MAXN];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp[i].dem>>temp[i].prazo;
    }
    int maior=0;
    sort(temp,temp+n,sorteio);
    for(int i=0;i<n;i++){
        pos=pos+temp[i].dem;
        if(pos>temp[i].prazo){
            if(pos>maior){
                maior=pos-temp[i].prazo;
            }

        }
    }
    cout<<maior<<endl;

}
