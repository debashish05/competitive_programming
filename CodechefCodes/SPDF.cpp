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
        int n,k;
        cin>>n;
        char c;
        cin>>c;
        if(c=='s'){
            if(n==1)cout<<"1";
            else if(n==2)cout<<"2";
            else if(n==3)cout<<"4";
            else if(n==4)cout<<"6";
            else if(n==5)cout<<"9";
            else if(n==6)cout<<"12";
            else {
                k=12;
                n-=6;
                n*=4;
                cout<<k+n;
            }
        }
        else if(c=='p'){
            if(n==2)cout<<"3";
            else if(n==3)cout<<"5";
            else if(n==4)cout<<"8";
            else if(n==5)cout<<"11";
            else {k=11;
            n-=5;
            n*=4;
            cout<<k+n;}
        }
        else if(c=='d'){
            if(n==3)cout<<"7";
            else if(n==4)cout<<"10";
            else {k=10;
            n-=4;
            n*=4;
            cout<<k+n;}
        }
        else{
            if(n==4)cout<<"13";
            else {k=13;
            n-=4;
            n*=4;
            cout<<k+n;}
        }
        cout<<"\n";
    }
    return 0;
}
