#include <iostream>
using namespace std;
char oitavas[25]="ABCDEFGHIJKLMNOP",quartas[10],semi[10],finalp[10],res[10];
void determ(int jogos,char *atual,char *ganhador){
    int primeiro,segundo;
    for(int i=0;i<jogos;i++){
        cin>>primeiro>>segundo;
        if(primeiro>segundo){
            ganhador[i]=atual[i*2];
        }else{
            ganhador[i]=atual[i*2+1];
        }
    }

}
int main(){
    determ(8,oitavas,quartas);
    determ(4,quartas,semi);
    determ(2,semi,finalp);
    determ(1,finalp,res);
    cout<<res[0]<<endl;

}
