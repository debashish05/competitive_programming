#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int u=0,d=0,e,k,i=0;
        char s[52];
        cin>>s;
        while(s[i]!='\0')
        {
            k=i;
            for(k;s[k]=='U';k++);
            if(i!=k)
                u++;
            e=k;
            for(k;s[k]=='D';k++);
            if(e!=k)d++;
            i=k;
        }
        if(u>d)cout<<d<<"\n";
        else
            cout<<u<<"\n";
    }
    return 0;
}
