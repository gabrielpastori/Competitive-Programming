#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAXN 10010
struct aeroportos{
    int num;
    int voos;
};
bool sorteio(aeroportos a,aeroportos b){
    if (a.voos==b.voos){
        return a.num<b.num;
    }
    return a.voos>b.voos;
}
int main(){
    int a,v,x,y,cont=0,u=0,j=1;
    aeroportos aeroporto[MAXN];

    while (true){
        u=0;cont=0;
        cin>>a>>v;
        memset(aeroporto,0,sizeof(aeroporto));
        if (a==0 and v==0){
            break;
        }
        for (int i=0;i<v;i++){
            cin>>x>>y;
            aeroporto[x].voos+=1;
            aeroporto[y].voos+=1;
            aeroporto[x].num=x;
            aeroporto[y].num=y;
        }
        sort(aeroporto,aeroporto+a+1,sorteio);
        while (true){
            cont+=1;
            if(aeroporto[u].voos!=aeroporto[u+1].voos){
                break;
            }
            u++;
        }
        cout<<"Teste "<<j<<endl;
        for (int i=0;i<cont;i++){
            cout<<aeroporto[i].num<<" ";
        }
        cout<<endl;
        cout<<endl;
        j++;


    }
}
