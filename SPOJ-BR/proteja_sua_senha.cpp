#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector <pair<int,int> > v;
int main(){
    int n;
    char z;
    int res[10];
    int mat[10][10];
    int k=1;
    memset(mat,0,sizeof(mat));
    while(cin>>n){
        if(n==0) break;
         memset(mat,0,sizeof(mat));
        for(int w=0;w<n;w++){
        int j,p1,p2;
        vector<pair<int,int> > v;
        for(int i=1;i<=10;i++){
            if(i%2==0){
                cin>>p2;
                v.push_back(make_pair(p1,p2));
            }else{
                cin>>p1;
            }
        }
        for(int i=1;i<=6;i++){
            cin>>z;
            if(z=='A'){
                mat[i][v[0].first]+=1;
                mat[i][v[0].second]+=1;
            }
            if(z=='B'){
                mat[i][v[1].first]+=1;
                mat[i][v[1].second]+=1;
            }
            if(z=='C'){
                mat[i][v[2].first]+=1;
                mat[i][v[2].second]+=1;
                
            }
            if(z=='D'){
                mat[i][v[3].first]+=1;
                mat[i][v[3].second]+=1;
            }
            if(z=='E'){
                mat[i][v[4].first]+=1;
                mat[i][v[4].second]+=1;
            }
        
        }
 
        }
        cout<<"Teste "<<k<<endl; 
        for(int i=1;i<=6;i++){
            for(int j=0;j<10;j++){
                if(mat[i][j]==n){
                    cout<<j<<" ";
                    break;
                }
            }
        }
        cout<<endl;
        if(k==1) cout<<endl;
        k++;
 
        
    }
    
 
} 