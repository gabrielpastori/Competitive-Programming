#include <iostream>
using namespace std;

int main(){
  int A[110][110], B[110][110];
  int n;
  cin>>n;
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>A[i][j];
    }
  }
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>B[i][j];
    }
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout<<A[i][j]+B[i][j]<<" ";
      if (j==n-1){
        cout<<""<<endl;
      }
    }
  }

  return 0;
}
