//Problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/1152
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 200000
#define MAXM 200000
struct taresta{
    int x, y, dist;

};
int pai[MAXN],peso[MAXN];
bool sorteia(taresta a,taresta b){
    return a.dist<b.dist;

}
int find(int x){
    if(pai[x]==x) return x;
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
int main(){
    int m,n;
    while(cin>>n>>m){
    if(n==0 and m==0){
        break;
    }
    int r=0;
    taresta aresta[MAXN];
    for(int i=0;i<=n;i++){
        pai[i]=i;
        peso[i]=0;

    }
    for(int i=0;i<m;i++){
        cin>>aresta[i].x>>aresta[i].y>>aresta[i].dist;
        r+=aresta[i].dist;
    }
    sort(aresta,aresta+m,sorteia);
    int cont=0;
    for(int i=0;i<m;i++){
        if(find(aresta[i].x)!=find(aresta[i].y)){
            cont+=aresta[i].dist;
            join(aresta[i].x,aresta[i].y);

        }

    }

    cout<<r-cont<<endl;
    }
}