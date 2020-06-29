#include <iostream>
#include <set>
#include <vector>
using namespace std;
#define MAXM 1100
set<int> s[MAXM];
vector<int> infectados;
bool infectadoP[MAXM];
int main(){
    int n,m;
    cin>>n>>m;
    int l,r;
    cin>>l>>r;
    int a,p;
    infectados.push_back(l);
    infectadoP[l]=1;
    for(int i=1;i<=m;i++){
        cin>>a;
        for(int j=0;j<a;j++){
            
            cin>>p;
            s[i].insert(p);
        }
    }
    bool reuniaoinfectada=0;
    for(int i=r;i<=m;i++){
        reuniaoinfectada=0;
        for(int k=0;k<infectados.size();k++){
            if(s[i].find(infectados[k])!=s[i].end()){
                reuniaoinfectada=1;
            }
        }
        if(reuniaoinfectada){
            for(set<int>:: iterator it=s[i].begin();it!=s[i].end();it++){
                int infectado=*it;
                infectadoP[infectado]=1;
                infectados.push_back(infectado);
            }
        }
    }
    int cont=0;
    for(int i=1;i<=n;i++){
        if(infectadoP[i]) cont++;
    }
    cout<<cont<<endl;
}