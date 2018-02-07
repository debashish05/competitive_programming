#include<bits/stdc++.h> 
#define ll long long int 
#define gc getchar_unlocked
void scan(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
using namespace std;
struct coach
{
    int di,ti,si;
};
bool acompare(coach lhs,coach rhs) { return lhs.si > rhs.si; }
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    scan(t);
    while(t--)
    {
        int n,d,j,i;
        ll r=0;
        scan(n);  //n coach d days
        scan(d); 
        coach a[n];
        for(i=0;i<n;++i)    //input
        {
            scan(a[i].di); scan(a[i].ti); scan(a[i].si); 
            --a[i].di;
        }
        sort(a,a+n,acompare);//working fine
       //work from here new concept
        vector <int> b;
        //vector <int> :: iterator x;
        for(int x=0;x<d;++x)    //vector
            b.push_back(x);     
        if(a[0].di+a[0].ti>d)   //for first coach only
            r+=(a[0].di+a[0].ti-d)*a[0].si;
        for(i=0;((i<n) && (d!=0));++i)// coach i
        {
            int k=0,p=a[i].ti;  //using after for loop
            for(j=a[i].di;((j<a[i].di+a[i].ti) && ((j<=b[d-1]) && (d!=0)));++j)
            {                                                         
                if(binary_search(b.begin(),b.end(),j))            
                {                                             
                    ++k;
                    int found=upper_bound(b.begin(),b.end(),j)-b.begin();
                    --found;
                    b.erase(b.begin()+found);   //edit
                    --d;
                }
                else
                    ++a[i].ti;
            }                                                                
            if(i)r+=(p-k)*a[i].si;
        }
        for(;i<n;++i)   //chef with no lecture
        r+=a[i].ti*a[i].si;
        cout<<r<<"\n";
    }
    return 0;
}
