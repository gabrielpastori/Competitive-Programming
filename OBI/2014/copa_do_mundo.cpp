#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 110
#define MAXM 10000
int pai[MAXN];
int peso[MAXN];
struct Aresta{
    int x,y;
    int dis;

};
bool comp(Aresta x,Aresta y) {return (x.dis<y.dis);}
int find(int x){
    if(pai[x]==x) return pai[x];
    return pai[x]=find(pai[x]);

}
Aresta aresta[MAXM];
void join(int x,int y){
    x=find(x);
    y=find(y);
    if(peso[x]>peso[y]){
        pai[y]=x;

    }
    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]==peso[y]){
        pai[x]=y;
        peso[y]++;
    }

}
int main(){
    int n,f,r;
    cin>>n>>f>>r;
    for(int i=0;i<=n;i++){
        pai[i]=i;
        peso[i]=0;
    }
    int a,b,c;
    for(int i=0;i<f;i++){
        cin>>aresta[i].x>>aresta[i].y>>aresta[i].dis;

    }
    int cont=0;
    sort(aresta,aresta+f,comp);
    for(int i=0;i<f;i++){
        if(find(aresta[i].x)!=find(aresta[i].y)){
            join(aresta[i].x,aresta[i].y);
            cont+=aresta[i].dis;

        }
    }
    for(int i=0;i<r;i++){
        cin>>aresta[i].x>>aresta[i].y>>aresta[i].dis;
        
    }
    sort(aresta,aresta+r,comp);
    for(int i=0;i<r;i++){
        if(find(aresta[i].x)!=find(aresta[i].y)){
            join(aresta[i].x,aresta[i].y);
            cont+=aresta[i].dis;

        }
    }
    cout<<cont<<endl;
    return 0;
}
