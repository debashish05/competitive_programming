#include<iostream>
using namespace std;
int main()
{
    int t;
    unsigned long long int x,u,v;
    cin>>t;
    while(t--)
    {
        cin>>u>>v;
        x=u+v;
        x=(x*(x+1))/2+1;    //rank of x
        x+=u;   //rank of required element
        cout<<x<<"\n";
    }
    return 0;
}
