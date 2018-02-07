#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a-b;
    b=c/10;
    b*=10; b++;
    if(b==c)
    b++;
    cout<<b;
    return 0;
}
