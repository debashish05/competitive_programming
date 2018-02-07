#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        char s[100010];
        long long int sum=0,i;
        cin>>s;
        for(i=0;s[i]!='\0';++i)
        {
            sum+=(s[i]-'0');
        }
        if(sum<9 && i>1) cout<<9-sum<<"\n";
        else if(sum%9==0)cout<<"0\n";
        else if(sum%9>=5)
            cout<<9-(sum%9)<<"\n";
        else 
            cout<<sum%9<<"\n";
    }
    return 0;
}
