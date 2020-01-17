#include <iostream>

using namespace std;

int main(){
    int m,a,b;
    cin>>m>>a>>b;
    int c=m-a-b;
    cout<<max(max(c,a),b)<<endl;
}
