#include<bits/stdc++.h> 
#define ll long long int 
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,v1,v2;
        cin>>n>>v1>>v2;
        v2=v2/sqrt(2);
        if(v2>=v1)cout<<"Elevator\n";
        else cout<<"Stairs\n";
    }
    return 0;
}
