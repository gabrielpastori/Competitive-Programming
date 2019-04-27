#include <iostream>
#include <cstring>
using namespace std;
#define MAXN 1100
int s1[MAXN],s2[MAXN],tab[MAXN][MAXN];

int lcs(int a,int b){
    if(tab[a][b]>=0) return tab[a][b];
    if(a==0 or b==0) return tab[a][b]=0;
    if(s1[a]==s2[b]) return tab[a][b]=1+lcs(a-1,b-1);
    return tab[a][b]=max(lcs(a-1,b),lcs(a,b-1));
}
int main(){
  int n,m;
  memset(tab,-1,sizeof(tab));
  cin>>n>>m;
  for(int i=1;i<=n;i++){
    cin>>s1[i];

  }
  for(int i=1;i<=m;i++){
    cin>>s2[i];

  }
  int k=lcs(n,m);

  cout<<n-k<<" "<<m-k<<endl;
    
}
