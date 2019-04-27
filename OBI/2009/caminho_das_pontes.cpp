#include <iostream>
#include <vector>
#include  <algorithm>
#include <cstring>
#include <climits>
#include <queue>
using namespace std;
#define INFINITO 9999999
#define MAXN 1100
int n,m,distancia[MAXN],processado[MAXN];
vector<pair<int,int >  > v[MAXN];
void dijkstra(){
    for(int i=0;i<=n+5;i++){
        distancia[i]=INFINITO;
    }
    distancia[0]=0;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > fila;
    fila.push(make_pair(0,0));
    while(true){
        int davez=-1;
        while(!fila.empty()){
            int atual=fila.top().second;
            fila.pop();
            if(!processado[atual]){
                davez=atual;
                break;

            }


        }
        if(davez==-1) break;
        for(int i=0;i<v[davez].size();i++){
            int atual=v[davez][i].second;
            int dist=v[davez][i].first;
            if(distancia[atual]>distancia[davez]+dist){
                distancia[atual]=distancia[davez]+dist;
                fila.push(make_pair(distancia[atual],atual));
            }
        }

    }
}
int main(){

    cin>>n>>m;
    int s,t,b;
    for(int i=0;i<m;i++){
        cin>>s>>t>>b;
        v[s].push_back(make_pair(b,t));
        v[t].push_back(make_pair(b,s));


    }
    dijkstra();
    cout<<distancia[n+1]<<endl;


}
