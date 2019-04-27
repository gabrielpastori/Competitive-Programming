#include <iostream>
#include <cstring>
#include <vector>
#include <climits>
#include <sstream>
using namespace std;
vector<vector<int> > mojo;
int ok;
int voodoo(int no){
    int n,peso,atual,total;
    n=(int) mojo[no].size();
    total=1;
    for(int i=0;i<n;i++){
        atual=voodoo(mojo[no][i]);
        if(!i) peso=atual;
        else{
            if(atual!=peso) ok=0;

        }
        total+=atual;
    }
    return total;
}
int main(){
    int i,j,n;
    cin>>n;
    mojo.resize(n+1);
    for(int k=0;k<n;k++){
        cin>>i>>j;
        mojo[j].push_back(i);
    }
    ok=1;
    voodoo(0);
    cout<<(ok ? "bem":"mal")<<endl;









}
