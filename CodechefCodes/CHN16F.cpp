#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,c;
        cin>>n>>m>>c;
        int a[c],i,j,b[n][m],k=0,t=1;
        for(i=0;i<c;++i)cin>>a[i];
        for(i=0;i<n;++i)
        {
            if(i%2==0){
                for(j=0;j<m;++j)
                {
                    if(!a[k]--){++t;++k;a[k]--;};
                    b[i][j]=t;
                }
            }
            else {
                for(j=m-1;j>=0;--j)
                {
                    if(!a[k]--){++t;++k;a[k]--;};
                    b[i][j]=t;
                }
            }
        }
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            cout<<b[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
