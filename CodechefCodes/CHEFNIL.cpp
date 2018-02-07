#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,i,j,k;
  cin>>n>>m;//3 4
  int a[m][n][n];
  for(k=0;k<m;k++)
    for(i=0;i<n;++i)
      for(j=0;j<n;++j)
        cin>>a[k][i][j];
  i=0;j=1;
  int p=1;
  for(k=0;k<m;++k){
    if(p==1)++i;
    cout<<i<<" "<<j<<"\n";
    if(p==0)--i;
    if(i%n==0){j++;p=1-p;}
  }
  cout<<"-1 -1\n";
  return 0;
}
