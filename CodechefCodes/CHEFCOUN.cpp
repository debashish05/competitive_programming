#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int
#define loop(k) for(i=0;i<k;++i)
#define loop2(k) for(j=0;j<k;++j)
#define mod 1000000007
using namespace std;
/*int wrongSolver(std::vector <unsigned int>& a) {
	int n = a.size();
	std::vector<unsigned int> prefSum(n), sufSum(n);
	prefSum[0] = a[0];
	for (int i = 1; i < n; i++) {
		prefSum[i] = prefSum[i - 1] + a[i];
	}
	sufSum[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		sufSum[i] = sufSum[i + 1] + a[i];
	}
	unsigned int mn = prefSum[0] + sufSum[0];
	int where = 1;
	for (int i = 1; i < n; i++) {
		unsigned int val = prefSum[i] + sufSum[i];
		if (val < mn) {
			mn = val;
			where = i + 1;
		}
    }
    //cout<<prefSum[where-1] + sufSum[where-1]<<"\n";
	return where;
}*/
int main()
{
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1,i,j;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<unsigned int> a(n);
        loop(42949)a[i]=100000;
        a[42949]=2;a[42950]=1;
        a[42951]=67291-(n-42952);             //n-42952
        for(i=42952;i<n;++i)a[i]=1;
        //cout<<wrongSolver(a);
        //unsigned int sum1=0;
        loop(n){cout<<a[i]<<" ";}
        //loop(n)sum1+=a[i];
        //unsigned int a1=sum1+a[42949],a2=sum1+a[42950];
        //cout<<a1;
        cout<<"\n";
    }
    return 0;
}
