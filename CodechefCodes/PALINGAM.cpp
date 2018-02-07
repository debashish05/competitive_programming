#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        char s[501],t[501];
        cin>>s>>t;      //input....output will be A or B depending upon winner
        int len=strlen(s),a[26],b[26];
        if(len==1){cout<<"B\n";continue;}
        for(i=0;i<26;++i)
        {
            a[i]=b[i]=0;
        }
        for(i=0;i<len;++i)
        {
            if(s[i]=='a')a[0]++;
            else if(s[i]=='b')a[1]++;
            else if(s[i]=='c')a[2]++;
            else if(s[i]=='d')a[3]++;
            else if(s[i]=='e')a[4]++;
            else if(s[i]=='f')a[5]++;
            else if(s[i]=='g')a[6]++;
            else if(s[i]=='h')a[7]++;
            else if(s[i]=='i')a[8]++;
            else if(s[i]=='j')a[9]++;
            else if(s[i]=='k')a[10]++;
            else if(s[i]=='l')a[11]++;
            else if(s[i]=='m')a[12]++;
            else if(s[i]=='n')a[13]++; 
            else if(s[i]=='o')a[14]++;
            else if(s[i]=='p')a[15]++;
            else if(s[i]=='q')a[16]++;
            else if(s[i]=='r')a[17]++;
            else if(s[i]=='s')a[18]++;
            else if(s[i]=='t')a[19]++;
            else if(s[i]=='u')a[20]++;
            else if(s[i]=='v')a[21]++;
            else if(s[i]=='w')a[22]++;
            else if(s[i]=='x')a[23]++;
            else if(s[i]=='y')a[24]++;
            else a[25]++;
        }
        for(i=0;i<len;++i)
        {
            if(t[i]=='a')b[0]++;
            else if(t[i]=='b')b[1]++;
            else if(t[i]=='c')b[2]++;
            else if(t[i]=='d')b[3]++;
            else if(t[i]=='e')b[4]++;
            else if(t[i]=='f')b[5]++;
            else if(t[i]=='g')b[6]++;
            else if(t[i]=='h')b[7]++;
            else if(t[i]=='i')b[8]++;
            else if(t[i]=='j')b[9]++;
            else if(t[i]=='k')b[10]++;
            else if(t[i]=='l')b[11]++;
            else if(t[i]=='m')b[12]++;
            else if(t[i]=='n')b[13]++; 
            else if(t[i]=='o')b[14]++;
            else if(t[i]=='p')b[15]++;
            else if(t[i]=='q')b[16]++;
            else if(t[i]=='r')b[17]++;
            else if(t[i]=='s')b[18]++;
            else if(t[i]=='t')b[19]++;
            else if(t[i]=='u')b[20]++;
            else if(t[i]=='v')b[21]++;
            else if(t[i]=='w')b[22]++;
            else if(t[i]=='x')b[23]++;
            else if(t[i]=='y')b[24]++;
            else b[25]++;
        }
        int r=0;    //asumming b will win if r=0 and a if r=1
        //array a and b have number of characters in string s and t
        for(i=0;i<26;++i)
        {
            if(a[i]>=2 && b[i]==0){r=1;break;}
        }
        if(r){cout<<"A\n";continue;}
        r=1;
        for(i=0;i<26;++i)      //r=0
        {
            if(a[i]!=0 && b[i]==0)//elements present in s but not in t
            {
                r=0;
                --a[i];
                break;
            }
        }
        if(r){cout<<"B\n";continue;}
        r=1;
        for(i=0;i<26;++i)
        {
            if(b[i]!=0 && a[i]==0)  //elements in t but not in s
                r=0;
        }
        if(r){cout<<"A\n";continue;}
        cout<<"B\n";
    }
    return 0;
}
