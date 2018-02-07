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
    int n,d,i,j;
    cin>>n>>d;
    ll a[n],b[d],op=0;//store mean of sub array and data entry
    for(i=0;i<n;++i)
      cin>>a[i];          //input complete
    for(i=0;i<d;++i)      //i+d=j
    {
      ll sum=0,k=0;   //array with input having interval d
      for(j=i;j<n;j+=d){
        ++k;
        sum+=a[j];
      }
      if(sum%k!=0){op=-1;break;}
      b[i]=sum/k;    //mean of array
      if(i>0 && b[i]!=b[i-1]){op=-1;break;} 
      // find number of minimum operation
      int pos=i;   //starting position of subarray
      for(j=i;j<n && pos<n;j+=d)
      {
        ll diff=a[j]-b[i];//diff with mean
        if(diff>0)//elements having value greater than mean
        {
          a[j]-=diff;
          while(diff!=0)
          {
            ll diff1=b[i]-a[pos];
            if(diff1<=0)
              pos+=d;
            else //elements less than minimum
            {
              ll s=b[i]-a[pos];
              if(s>diff)s=diff;
              ll res=((j-pos)*(s))/d; //wrong
              //cout<<"\n"<<res<<"\n";
              if(diff1<=diff)
              {
                a[pos]=b[i];
                pos+=d;
                diff-=diff1;
              }
              else
              {
                a[pos]+=diff;
                diff=0;
              }
              if(res<0)res*=(-1);
              op+=res;
            }
          }
        }
      }
    }
    cout<<op<<"\n";
	}
	return 0;
}
