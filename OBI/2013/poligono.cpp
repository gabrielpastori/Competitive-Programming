#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
#define MAXN 100000
int main(){
	int n,k,soma=0;
	cin>>n;
	vector<int> s;
	for(int i=1;i<=n;i++){
		cin>>k;
		soma+=k;
		s.push_back(k);
	}
	bool ok=1;
	int resp=-1;
	sort(s.begin(),s.end());
	//for(vector<int>:: iterator it=s.begin();it!=s.end();++it) cout<<*it<<endl;
	for(int j=0;j+2<n;j++){
		if(j!=0){
			soma-=s[s.size()-1];
			s.pop_back();

		}
		if(s[s.size()-1]<soma-s[s.size()-1]){
			resp=j;
			break;
		}

	}
	cout<<(resp==-1? 0:(n-resp))<<endl;
	
}
