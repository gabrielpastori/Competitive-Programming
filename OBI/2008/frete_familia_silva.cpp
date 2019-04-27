#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 1100
#define MAXM 10100
int pai[MAXN],peso[MAXN];
struct taresta{
    int x,y,dist;
    
};
int find(int x){
    if(x==pai[x]) return x;
    return pai[x]=find(pai[x]);

}
void join(int a,int b){
    a=find(a);
    b=find(b);
    if(peso[a]<peso[b]){
        pai[a]=b;

    }
    if(peso[a]>peso[b]){
        pai[b]=a;

    }
    if(peso[a]==peso[b]){
        pai[b]=a;
        peso[a]++;

    }
}
bool sorteia(taresta a,taresta b){
    return a.dist<b.dist;

}
int main(){

    int n,m;
    cin>>n>>m;
    int p,q,u;
    taresta aresta[MAXM];
    for(int i=0;i<m;i++){
        cin>>aresta[i].x>>aresta[i].y>>aresta[i].dist;

    }
    for(int i=0;i<n;i++){
        pai[i]=i;
        peso[i]=0;

    }
    int cont=0;
    sort(aresta,aresta+m,sorteia);
    for(int i=0;i<m;i++){
        if(find(aresta[i].x)!=find(aresta[i].y)){
            cont+=aresta[i].dist;
            join(aresta[i].x,aresta[i].y);

        }

    }
    cout<<cont<<endl;
}
