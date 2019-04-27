#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    pair<int,string> jogador[10010];
    int n,t,h;
    string nome;
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>nome>>h;
        jogador[i].first=h;
        jogador[i].second=nome;
    }
    sort(jogador,jogador+n);
    vector<string> v[1010];
    int j=0,aux=0;
    for(int i=n-1;i>=0;i--){
        aux=j%t;
        v[aux].push_back(jogador[i].second);
        j++;

    }
    for(int i=0;i<t;i++){
        sort(v[i].begin(),v[i].end());

    }
    for(int i=0;i<t;i++){
        cout<<"Time "<<i+1<<endl;
        for(int j=0;j<(int) v[i].size();j++){
            cout<<v[i][j]<<endl;
        }
        cout<<endl;
    }


}
