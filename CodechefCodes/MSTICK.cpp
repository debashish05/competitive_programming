#include<bits/stdc++.h>
#define ll long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k,l) for(j=k;j<l;++j)
#define mod 100000000
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//cin.tie(NULL);
    ll t=1,i=0,j=0;
    //cin>>t;
    while(t--){
      int n;cin>>n;
      ll a[n];
      loop(n)cin>>a[i];
      int len=(int)sqrt(n)+1;
      ll bmax[len]={0},bmin[len];
      loop(len)bmin[i]=100000000;
      loop(n){
        bmax[i/len]=max(bmax[i/len],a[i]);
      }
      loop(n){
        bmin[i/len]=min(bmin[i/len],a[i]);
      }
      int q;cin>>q;
      while(q--){
        int l,r;
        cin>>l>>r;
        int r1=r;
        double max=a[l],min=a[l];
        ll lt=l/len,rt=r/len;
        if(lt==rt){     //find max and min bw l r
          for(i=l;i<=r;++i){
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
          }
        }
        else{
          for(i=l;i<(lt+1)*len;++i){
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
          }
          for(i=lt+1;i<rt;++i){
            if(bmax[i]>max)max=bmax[i];
            if(bmin[i]<min)min=bmin[i];
          }
          for(i=rt*len;i<=r;++i){
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
          }
        }
        double maxout=0;  //find out max in array a excluding l to r
        r=l-1;l=0;
        if(r>=0){
          rt=r/len;lt=l/len;    //0-l-1
          if(lt==rt){
            for(i=l;i<=r;++i){
              if(a[i]>maxout)maxout=a[i];
            }
          }
          else{
            for(i=l;i<(lt+1)*len;++i){
              if(a[i]>maxout)maxout=a[i];
            }
            for(i=lt+1;i<rt;++i){
              if(bmax[i]>maxout)maxout=bmax[i];
            }
            for(i=rt*len;i<=r;++i){
              if(a[i]>maxout)maxout=a[i];
            }
          }
        }
        l=r1+1;r=n-1;
        if(l<=n-1){
          rt=r/len;lt=l/len;
          if(lt==rt){
            for(i=l;i<=r;++i){
              if(a[i]>maxout)maxout=a[i];
            }
          }
          else{
            for(i=l;i<(lt+1)*len;++i){
              if(a[i]>maxout)maxout=a[i];
            }
            for(i=lt+1;i<rt;++i){
              if(bmax[i]>maxout)maxout=bmax[i];
            }
            for(i=rt*len;i<=r;++i){
              if(a[i]>maxout)maxout=a[i];
            }
          }
        }
        //cout<<maxout<<" "<<min<<" "<<max<<"\n";
        double temp=maxout+min;
        max-=min;
        double temp2=min+max/2;
        //cout<<temp<<" "<<temp2<<"\n";
        if(temp<temp2)temp=temp2;
        cout<<fixed<<setprecision(1)<<temp<<"\n";
      }
    }
    return 0;
}
