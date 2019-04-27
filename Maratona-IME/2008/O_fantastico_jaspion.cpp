#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    long t,m,n;
    cin>>t;
    for(int i=0;i<t;i++){
        int m, n;
        cin >> m >> n;
        cin.ignore(256,'\n');
        map<string, string> dic;
        string j,p;
        while(m--) {
           
            getline(cin, j);
            getline(cin, p);
            dic[j] = p;
            
        }
        

        
        for(int i=0;i<n;i++){
            string linha,w;
            getline(cin,linha);
            stringstream ss;
            ss << linha;

            while (ss>>w){
                
                if(dic.find(w)!=dic.end()){
                    cout<<dic[w]<<" ";

                }else{
                    cout<<w<<" ";

                }
            }
            cout<<endl;


        }
        

    }

}
