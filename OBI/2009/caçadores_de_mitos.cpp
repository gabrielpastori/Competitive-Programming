#include <iostream>
using namespace std;
#define MAXN 1000
bool mat[MAXN][MAXN];
int main(){
    int n,a,b;
    cin>>n;
    bool ok=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(mat[a][b]){
            ok=1;
        }
        mat[a][b]=1;

    }
    cout<<ok<<endl;
}