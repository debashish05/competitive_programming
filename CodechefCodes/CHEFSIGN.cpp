#include<bits/stdc++.h> //CODCHEF TEMPLATE
#define ll long long int 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        char a[100001];
        cin>>a;
        ll min=-1,max=1,p=1,q=0,k=0;
        for(i=0;a[i]!='\0';++i)
        {
            if(a[i]=='<')
            {
                if(q==1){p=1;q=0;}
                ++p;
                if(max<p)max=p;
                if(k==0){
                    k=1;
                }
            }
            else if(a[i]=='>')
            {
                if(k==1){p=1;k=0;}
                --p;
                if(min>(p-2))min=p-2;
                if(q==0){
                    q=1;
                }
            }
        }
        min*=(-1);
        if(min>max)cout<<min<<"\n";
        else cout<<max<<"\n";
    }
    return 0;
}
