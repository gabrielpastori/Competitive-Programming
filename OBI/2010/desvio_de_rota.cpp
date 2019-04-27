
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define MAXN 330
#define INFINITO 9999999
int n,m,c,k,solucao_no_noic;
int processado[MAXN];
int distancia[MAXN];
vector<pair<int,int> > g[MAXN];
void infinite(){
    for(int i=0;i<=n;i++){
        g[i].clear();
    }
    for(int i=0;i<=n;i++){
        distancia[i]=INFINITO;
        processado[i]=0;
    }
}
int dijkstra(int ini,int destino){
    distancia[ini]=0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > fila;
    fila.push(make_pair(distancia[ini],ini));
    while(true){
        int davez=-1;
        int atual;
        while(!fila.empty()){
            atual=fila.top().second;
            fila.pop();
            if(!processado[atual]){
                davez=atual;
                break;

            }

        }
        processado[davez]=1;
        if(davez==-1) break;
        for(int i=0;i<g[davez].size();i++){
            int atual=g[davez][i].second;
            int dist=g[davez][i].first;
            if(distancia[atual]>distancia[davez]+dist){
                distancia[atual]=distancia[davez]+dist;
                fila.push(make_pair(distancia[atual],atual));
            }

        }

    }
    return distancia[destino];
}
int main(){
    while(cin>>n>>m>>c>>k){
        if(n==0 and m==0 and c==0 and k==0) break;
        infinite();
        int u,v,p;
        for(int i=0;i<m;i++){
            cin>>u>>v>>p;
            if(u<c and v>=c){
                g[v].push_back(make_pair(p,u));
            }
            if(v<c and u>=c){
                g[u].push_back(make_pair(p,v));
            }
            if(v>=c and u>=c){
                g[u].push_back(make_pair(p,v));
                g[v].push_back(make_pair(p,u));
            }
            if(u<c and v<c and ((u-v)==1 or (v-u)==1)){
                g[u].push_back(make_pair(p,v));
                g[v].push_back(make_pair(p,u));  
            }

        }
        cout<<dijkstra(k,c-1)<<endl;    


    }


}
