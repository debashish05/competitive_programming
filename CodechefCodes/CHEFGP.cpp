#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        char s[100001],s1[200001],f,sec;
        cin>>s;         //input string
        int x,y,length=strlen(s),count1=0,count2=0,in=-1,diff,k=1;
        cin>>x>>y;      
        loop(length){           //frequency of apple banana
            if(s[i]=='a')count1++;
            else count2++;
        }
        if(count1==count2){             //if frequency are same
            ++in;
            loop(length){
                if(in%2==0)s1[in]='a';
                else s1[in]='b';
                ++in;
            }
            s1[in]='\0';
            goto print;
        }           //working fine
        i=0;
        while(i<length)
        {
            //cout<<i;
            diff=count1-count2;
            if(diff<0)diff*=(-1);
            if(count1>count2 && count1!=0){        //made case if diff=0
                if(diff>=x){
                    count1-=x;
                    i+=x;
                    loop2(x)s1[++in]='a';
                }
                else{
                    count1-=diff;i+=diff;
                    loop2(diff)s1[++in]='a';
                }
                if(i<length){
                    if(count2){s1[++in]='b';count2--;++i;}
                    else s1[++in]='*';
                }
            }
            else if(count1<count2 && count2!=0){
                if(diff>=y){
                    count2-=y;i+=y;
                    loop2(y)s1[++in]='b';
                }
                else{
                    count2-=diff;i+=diff;
                    loop2(diff)s1[++in]='b';
                }
                if(i<length){
                    if(count1){s1[++in]='a';count1--;++i;}
                    else s1[++in]='*';
                }
            }
            else if(!(count1 || count2))break;
            else if(count1==count2){
                sec=s1[i-1];
                if(sec=='a')f='b';
                else f='a';
                while(i<length){
                    if(k)s1[++in]=f;
                    else s1[++in]=sec;
                    k=1-k;++i;
                }
            }
        }
        s1[++in]='\0';
        print:
        cout<<s1;
        cout<<"\n";
    }
    return 0;
}
