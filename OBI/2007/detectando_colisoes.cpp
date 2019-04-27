#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int x0,y0,x1,y1,a,b,c,d;
    cin>>x0>>y0>>x1>>y1;
    cin>>a>>b>>c>>d;
    int minx=min(x0,x1);
    int maxx=max(x0,x1);
    int miny=min(y0,y1);
    int maxy=max(y0,y1);


    int minx1=min(a,c);
    int maxx1=max(a,c);
    int miny1=min(b,d);
    int maxy1=max(b,d);

    if(maxx<minx1 or maxx1<minx or minx>maxx1 or minx1>maxx or maxy<miny1 or maxy1<miny or miny>maxy1 or miny1>maxy ){
        cout<<"0"<<endl;

    }else{
        cout<<"1"<<endl;

    }

    
}
