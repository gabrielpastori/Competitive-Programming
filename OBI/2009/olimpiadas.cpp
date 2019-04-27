#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
struct Aluno{
  int ouro;
  int bronze;
  int prata;
  int aux;
};
bool sorteiobronze(Aluno a,Aluno b){
  if(a.bronze>b.bronze){
    return true;
  }else{
    if(a.bronze<b.bronze){
      return false;
    }else{
      if(a.aux<b.aux){
        return true;
      }else{
        return false;
      }
    }
  }
}
bool sorteioprata(Aluno a,Aluno b){
  if(a.prata>b.prata){
    return true;
  }else{
    if(a.prata<b.prata){
      return false;
    }else{
      return(sorteiobronze(a,b));
    }
  }
}
bool sorteioouro(Aluno a,Aluno b){
  if(a.ouro>b.ouro){
    return true;
  }else{
    if(a.ouro<b.ouro){
      return false;
    }else{
      return (sorteioprata( a, b));
    }
  }
}

int main(){
  Aluno aluno[100];
  int n,m,o,p,b;
  cin>>n>>m;
  for (int i=1;i<=n;i++){
    aluno[i].aux=i;
  }
  aluno[0].aux=INT_MAX;
  for(int i=0;i<=n;i++){
    aluno[i].ouro=0;
    aluno[i].prata=0;
    aluno[i].bronze=0;
  }
  for (int i=0;i<m;i++){
    cin>>o>>p>>b;
    aluno[o].ouro+=1;
    aluno[p].prata+=1;
    aluno[b].bronze+=1;
  }

  sort(aluno,aluno+n+1,sorteioouro);

  for(int i=0;i<n;i++){
    cout<<aluno[i].aux<<" ";
  }


}
