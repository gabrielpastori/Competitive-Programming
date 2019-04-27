#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
#define MAXN 1000010
#define MAXM 1000010
long long int a[MAXN],f[MAXN],n,m;
long long int calcula(long long int k){
    if(f[k]!=-1) return f[k];
    long long int fk=0;
    for(long long int i=1;i<=n;i++){
        fk+=a[i]*calcula(k-i);

    }
    
    return f[k]=fk%m;

}
int main(){
    memset(f,-1,sizeof(f));
    long long int k;
    cin>>n>>k>>m;
    for(long long int i=1;i<=n;i++){
        cin>>a[i];

    }
    for(long long int i=1;i<=n;i++){
        cin>>f[i];

    }
    cout<<calcula(k)<<endl;
}
