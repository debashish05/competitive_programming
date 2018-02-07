#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int i=0,size,a[60];
        char temp; 
        do
        {
            scanf("%d%c", &a[i], &temp); 
            i++; 
        }while(temp!= '\n');
        size=i; 
        sort(a,a+size);
        if(a[size-1]==size-1){cout<<a[size-2]<<"\n";} //test
        else cout<<a[size-1]<<"\n";
    } 
    return 0;
}
