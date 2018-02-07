#include<iostream>
using  namespace std;
int main()
{
    int t,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        int k=0;
        cin>>x1>>y1>>x2>>y2;
        if(y1==y2)
        {
            k=1;
            if(x1>x2)
                cout<<"left";
            else
                cout<<"right";
        }
        if(x1==x2 && k==0)
        {
            if(y1>y2)
                cout<<"down";
            else
                cout<<"up";
        }
        else
            if(k==0)cout<<"sad";
        cout<<"\n";
    }
    return 0;
}
