#include <iostream>
using namespace std;
int dist(int x1,int y1,int x2,int y2){
    int a=max(x1,x2)-min(x1,x2);
    int b=max(y1,y2)-min(y1,y2);
    int c=a*a+b*b;
    return c;
}
int main(){
    int n,cont=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cont+=dist(x1,y1,x2,y2);

    }
    cout<<cont<<endl;
}
