//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1301
#include <iostream>
using namespace std;
#define MAXN 100100
int vet[MAXN],tree[4*MAXN];
int aux(int x){
    if(x<0) return -1;
    if(x>0) return 1;
    return 0;
}
void build(int node,int l,int r){
    if(l==r){
        tree[node]=vet[l];
        return;
    } 
    int mid=(l+r)/2;
    build(2*node,l,mid);
    build(2*node+1,mid+1,r);

    tree[node]=tree[2*node]*tree[2*node+1];

}
void update(int node,int l,int r,int idx,int x){
    if(l==r){
        vet[l]=x;
        tree[node]=x;
        return;
    }
    int mid=(l+r)/2;
    if(idx<=mid and l<=idx) update(2*node,l,mid,idx,x);
    else update(2*node+1,mid+1,r,idx,x);

    tree[node]=tree[2*node]*tree[2*node+1];
}
int query(int node, int tl, int tr, int l, int r){
    if(tl>r or tr<l)return 1;
    if(l<=tl and tr<=r)return tree[node];
    int mid=(tl+tr)>>1;
    return query(2*node, tl, mid, l, r) * query(2*node+1, mid+1, tr, l, r);
}

void imprimearvore(){
    for(int i=1;i<=7;i++) cout<<tree[i]<<endl;
    cout<<endl;
}
int main(){
    int n,k,p;
    while(cin>>n>>k){
        for(int i=1;i<=n;i++){
            cin>>p;
            vet[i]=aux(p);
        }
        build(1,1,n);
        char l;
        int i,v,j;
        
        for(int w=0;w<k;w++){
            cin>>l;
            if(l=='C'){
                cin>>i>>v;
                update(1,1,n,i,aux(v));
                
            }
            if(l=='P'){
                cin>>i>>j;
                int temp=query(1,1,n,i,j);
                if(temp<0) cout<<"-";
                if(temp>0) cout<<"+";
                if(temp==0) cout<<"0";
            }
        }
        cout<<endl;
    }

}