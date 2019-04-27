#include <iostream>
#include <sstream>
using namespace std;
long long int resp(long long int num,long long int k,long long int j){
	if((num-j*k)<=1) return 1;
	return (num-j*k)*resp(num,k,j+1);

}
int main(){
	long long int n;
	cin>>n;
	string s,aux;
	for(int i=0;i<n;i++){
		cin>>s;
		long long int j=0;
		aux="";
		long long int num;
		while(s[j]!='!'){
			aux+=s[j];
			j++;

		}
		long long int k=s.size()-j;

		stringstream(aux)>>num;
		cout<<resp(num,k,1)*num<<endl;

	}
	
	
		
}
