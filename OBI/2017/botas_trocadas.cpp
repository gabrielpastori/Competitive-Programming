#include <iostream>
#include <cstring>
using namespace std;
int botas[100][2];
int main(){
    memset(botas,0,sizeof(botas));
    int n,m;
    char l;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>l;
        if(l=='E'){
            botas[m][0]+=1;
        }
        if(l=='D'){
            botas[m][1]+=1;
        }
    }
    int count=0;
    for (int i = 30; i <=60; i++){
        count+=min(botas[i][0],botas[i][1]);
    }
    cout<<count<<endl;
    
    
}