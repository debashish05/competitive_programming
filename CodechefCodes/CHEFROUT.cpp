#include <iostream>
using namespace std;
int main()
{
    int t,i;
    char s[100002];
    cin>>t;
    while(t--)
    {
        int k=0;
        cin>>s;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='S')k=3;
            if(s[i]=='E'&&k==3){k=0;break;}
            if(s[i]=='E')k=2;
            if(s[i]=='C'&&(k==2||k==3)){k=0;break;}
            if(s[i]=='C')k=1;
        }
        if(k!=0)cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
