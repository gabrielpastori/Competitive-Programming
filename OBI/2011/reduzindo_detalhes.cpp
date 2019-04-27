#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <set>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
#define MAXN 600
#define MAXM 125000
int pai[MAXN],peso[MAXN];
struct taresta{
    int x,y,dist;

};
bool sorteia(taresta a, taresta b){
    return a.dist<b.dist;

}
int find(int x){
    if(pai[x]==x) return x;
    return pai[x]=find(pai[x]);
}
void join(int x,int y){
    x=find(x);
    y=find(y);
    if(peso[x]<peso[y]){
        pai[x]=y;

    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }
    if(peso[x]==peso[y]){
        pai[y]=x;
        peso[x]++;

    }

}
int main(){
    int n,m;
    cin>>n>>m;
    taresta aresta[MAXM];
    for(int i=0;i<m;i++){
        cin>>aresta[i].x>>aresta[i].y>>aresta[i].dist;
    }
    sort(aresta,aresta+m,sorteia);
    for(int i=1;i<=n;i++){
        pai[i]=i;
        peso[i]=0;
    }
    int cont=0;
    for(int i=0;i<m;i++){
        if(find(aresta[i].x)!=find(aresta[i].y)){
            join(aresta[i].x,aresta[i].y);
            cont+=aresta[i].dist;
        }
    }
    cout<<cont<<endl;
}
