    #include <iostream>
     
    using namespace std;
    #define MAXN 110
    int main(){
    	int n;
    	int m[MAXN][MAXN];
    	cin>>n;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin>>m[i][j];
    		}
     
    	}
    	int k;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin>>k;
    			m[i][j]+=k;
    		}
    	}
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout<<m[i][j]<<" ";
    		}
    		cout<<endl;
    	}
     
    } 