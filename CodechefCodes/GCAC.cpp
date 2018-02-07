#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  std::ios::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,i,j;
    cin>>n>>m;
    ll mins[n],os[m],maxjob[m];//offered salary by company j,max students company j can intake
    for(i=0;i<n;++i)//minsalarey of i students expected
      cin>>mins[i];
    for(i=0;i<m;++i)//offered salary by company j,max students company j can intake
    {
      cin>>os[i]>>maxjob[i];
    }
    char qual[n][m+1];
    for(i=0;i<n;++i)//for(j=0;j<m;++j)  //debug
        cin>>qual[i];
    //input qual[i][j]=1 means selected
    //OUTPUT----->NO. OF STUDENTS GET PLACED,SUMOF OFFERED JOBS
    //NO. OF COMPANIES WITH NO RECRUITMENT
    int comp=m,stud=0,k[m];
    ll total=0,max,os1[m];
    for(i=0;i<m;++i){os1[i]=os[i];} //creating copy
    for(i=0;i<m;++i)// build array k having index of offering salary in decreasing order
    {
        max=os1[0];
        for(j=0;j<m;++j)
        {
            if(max<os1[j])
            {
                max=os1[j];
                k[i]=j;
            }
        }
        if(max==os1[0])k[i]=0;
        os1[k[i]]=-1;              //debug
    }
    int z[m];
    for(i=0;i<m;++i)z[i]=1;     
    for(i=0;i<n;++i)
    {
      for(j=0;j<m;++j)
      {
        //cout<<qual[i][k[j]];//<<maxjob[k[j]]<<os[k[j]];
        if(qual[i][k[j]]=='1' && (maxjob[k[j]]!=0 && mins[i]<=os[k[j]]))
        {          
          ++stud;
          total+=os[k[j]];
          if(z[k[j]]){z[k[j]]=0;--comp;}
          --maxjob[k[j]];
          break;
        }
      }
    
    }
    cout<<stud<<" "<<total<<" "<<comp<<"\n";
  }
  return 0;
}
