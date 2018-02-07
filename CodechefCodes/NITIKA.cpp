#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char a[50];
        int  nc=0,j,i=0;
        fgets(a,sizeof(a),stdin);
        for(i=0;a[i]!='\0';++i)
        {
            if(a[i]==' ')
            nc++;
        }
        if(nc==0)
        {
            a[0]=toupper(a[0]);
            for(i=1;a[i]!='\0';++i)
            {
                a[i]=tolower(a[i]);
            }
        }
        if(nc==1) 
        {
            char c[50];
            c[0]=toupper(a[0]);
            c[1]='.';
            c[2]=' ';
            for(i=0;a[i]!=' ';++i);
            j=3;
            ++i;
            for(i;a[i]!='\0';++i)
            {
                if(j==3)c[j]=toupper(a[i]);
                else
                c[j]=tolower(a[i]);
                ++j; 
            }
            c[j]='\0';
            strcpy(a,c);
        }//working fine
        if(nc==2)
        {
            char c[50];
            c[0]=toupper(a[0]);
            c[1]='.';
            c[2]=' ';//
            for(i=0;a[i]!=' ';++i);
            ++i;
            c[3]=toupper(a[i]); 
            c[4]='.';
            c[5]=' ';
            for(i;a[i]!=' ';++i);
            ++i;
            j=6;
            for(i;a[i]!='\0';++i)
            {
                if(j==6)c[j]=toupper(a[i]);
                else
                c[j]=tolower(a[i]);
                ++j; 
            }
            c[j]='\0';
            strcpy(a,c);
        }
        cout<<a;
    }
    return 0;
}
