#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define MAXN 5050
int componente[MAXN];
vector <int> lista[MAXN];
void dfs(int x){
    for(int i=0;i<(int)lista[x].size();i++){
        int v= lista[x][i];
        if(componente[v]==-1){
            componente[v]=componente[x];
            dfs(v);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        componente[i]=-1;
    }
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        lista[a].push_back(b);
        lista[b].push_back(a);

    }
    int cont=0;
    for(int i=1;i<=n;i++){
        if(componente[i]==-1){
            cont++;
            componente[i]=cont;
            dfs(i);

        }

    }
    cout<<cont<<endl;



}
