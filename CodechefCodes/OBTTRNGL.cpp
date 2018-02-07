#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll k,a,b;
        cin>>k>>a>>b;
        if(k%2==0)
        {
            ll diff=a-b;
            if(diff<0)diff*=(-1);
            if(k/2==diff)cout<<"0\n";
            else if(diff<k/2)cout<<diff-1<<"\n";
            else {
                ll diff=a-b,diff1;
                if(diff<0)diff*=(-1);diff-=1;
                if(a<b)diff1=k-b+a-1;
                else diff1=k-a+b-1;
                if(diff1<0)diff1*=(-1);
                if(diff>diff1)cout<<diff1<<"\n";
                else cout<<diff<<"\n";
            }
        }
        else
        {
            ll diff=a-b,diff1;
            if(diff<0)diff*=(-1);diff-=1;
            if(a<b)diff1=k-b+a-1;
            else diff1=k-a+b-1;
            if(diff1<0)diff1*=(-1);
            if(diff>diff1)cout<<diff1<<"\n";
            else cout<<diff<<"\n";
        }
    }
    return 0;
}
