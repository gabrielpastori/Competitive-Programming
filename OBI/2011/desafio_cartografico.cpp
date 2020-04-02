#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
#define MAXN 1000100
vector<int> vet[MAXN];
bool mark[MAXN];
int mdistancia,mvertice;
int dfs(int v,int distancia){
    mark[v]=1;
    if(distancia>mdistancia){
        mdistancia=distancia;
        mvertice=v;
    }
    for(int i=0;i<vet[v].size();i++){
        if(!mark[vet[v][i]]) dfs(vet[v][i],distancia+1);
    }
}
int main(){
    int n;
    cin>>n;
    int a,b,ini;
    for(int i=0;i<(n-1);i++){
        cin>>a>>b;
        ini=a;
        vet[a].push_back(b);
        vet[b].push_back(a);
    }
    for(int i=0;i<(n-1);i++) mark[i]=0;
    dfs(1,0);
    for(int i=0;i<(n-1);i++) mark[i]=0;
    dfs(mvertice,0);

    cout<<mdistancia<<endl;
    return 0;
}