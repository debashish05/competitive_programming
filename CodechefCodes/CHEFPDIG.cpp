#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t,i;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int no[10];
        for(i=0;i<10;++i)no[i]=0;
        for(i=0;a[i]!='\0';++i){
            if(a[i]=='0')no[0]=1;
            else if(a[i]=='1')no[1]=1;
            else if(a[i]=='2')no[2]=1;
            else if(a[i]=='3')no[3]=1;
            else if(a[i]=='4')no[4]=1;
            else if(a[i]=='5')no[5]=1;
            else if(a[i]=='6')++no[6];
            else if(a[i]=='7')++no[7];
            else if(a[i]=='8')++no[8];
            else no[9]=1; 
        }
        //for(i=0;i<10;++i)cout<<no[i];
        if(no[6]==1){for(i=5;i<10;++i){if(i==6)continue;if(no[i]!=0)cout<<char(6*10+i);}}
        if(no[6]>=2){for(i=5;i<10;++i){if(no[i]!=0)cout<<char(6*10+i);}}
        if(no[7]==1){for(i=0;i<10;++i){if(i==7)continue;if(no[i]!=0)cout<<char(7*10+i);}}
        if(no[7]>=2){for(i=0;i<10;++i){if(no[i]!=0)cout<<char(7*10+i);}}
        if(no[8]==1){for(i=0;i<10;++i){if(i==8)continue;if(no[i]!=0)cout<<char(8*10+i);}}
        if(no[8]>=2){for(i=0;i<10;++i){if(no[i]!=0)cout<<char(8*10+i);}}
        if(no[9]!=0 && no[0]!=0)cout<<"Z";
        cout<<"\n";
    }
    return 0;
}
