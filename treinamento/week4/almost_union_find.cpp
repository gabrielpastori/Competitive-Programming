// Kattis - Almost Union-Find
#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;
#define MAXN 200100
int pai[MAXN], qtd[MAXN];
lli sum[MAXN];

int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int a, int b){
    int pa = find(a);
    int pb = find(b);
    if(pa == pb) return;
    pai[pa] = pb;
    qtd[pb] += qtd[pa];
    sum[pb] += sum[pa];
}

void move(int a, int b){
    int pa = find(a);
    int pb = find(b);

    pai[a] = pb;
    qtd[pb]++;
    qtd[pa]--;
    sum[pa]-=(lli)a;
    sum[pb]+=(lli)a;

}

int main(){
    int n,m,o,p,q;
    while(cin>>n>>m){
        for(int i = 1; i<=n; i++){
            pai[i] = i+n;
            pai[i+n] = i+n;
            qtd[i+n] = 1;
            sum[i+n] = i;
        }
        for(int i=0; i<m; i++) {
            cin>>o;
            if (o == 1){
                cin>>p>>q;
                join(p,q);
            }
            if (o == 2) {
                cin>>p>>q;
                move(p, q);

            }
            if (o == 3) {
                cin>>p;
                p = find(p);
                cout<<qtd[p]<<" "<<sum[p]<<endl;
            }

        }
    }
}