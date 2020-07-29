//Problem: https://www.urionlinejudge.com.br/judge/pt/problems/view/2326
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <climits>
#include <cstring>
#include <vector>
#include <map>
using namespace std;
#define MAXN 50
int mark[MAXN],n,t,preco[MAXN];
vector<int> v[MAXN];
vector<int> pca,pcb;
char cor[MAXN];
int conta=0,contb=0;
int dfs(int x){

    if(cor[x]=='A'){
        pca.push_back(preco[x]);
    }else{
        pcb.push_back(preco[x]);
    }
    mark[x]=1;
    for(int i=0;i<v[x].size();i++){
        if(!mark[v[x][i]]){
            dfs(v[x][i]);

        }

    }

}
int main(){
    memset(mark,0,sizeof(mark));
    int x,p,k;
    char c;
    int l;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>x>>p>>c>>k;
        cor[x]=c;
        preco[x]=p;
        
        for(int j=0;j<k;j++){

            cin>>l;
            v[x].push_back(l);
        }

    }

    dfs(0);
    int a=pca.size();
    int b=pcb.size();

    int aux;
    pca.push_back(0);
    pcb.push_back(0);
    for(int i=0;i<b;i++) {
        for(int j=i+1;j<b;j++){
            if(pcb[i]+pcb[j]<=t) pcb.push_back(pcb[i]+pcb[j]);

        }
    }
    for(int i=0;i<a;i++) {
        for(int j=i+1;j<a;j++){
            if(pca[i]+pca[j]<=t) pca.push_back(pca[i]+pca[j]);

        }
    }

    for(int i=0;i<a;i++){
        
        for(int j=2;pca[i]*j<t;j++){
        
            pca.push_back(j*pca[i]);


        }

    }


    for(int i=0;i<b;i++) {
        for(int j=2;pcb[i]*j<t;j++){
            pcb.push_back(j*pcb[i]);


        }
    }

    a=pca.size();
    b=pcb.size();
    
    
    int mini=INT_MAX;
    for(int i=0;i<pca.size();i++){
        for(int j=0;j<pcb.size();j++){
            

            if(pca[i]==0 and pcb[j]==0) continue;

            if(abs(pca[i]-pcb[j])<mini and pca[i]+pcb[j]<=t){
            
                mini=abs(pca[i]-pcb[j]);
            }

        }

    }
    cout<<mini<<endl;
    

