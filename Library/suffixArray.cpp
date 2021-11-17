#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define ull unsigned long long int
#define loop(k1) for (int i = 0; i < k1; ++i)
#define loop2(k2, l) for (j = k2; j < l; ++j)
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define inf numeric_limits<ll>::max()
#define MAXN 100001
// Reference : https://cp-algorithms.com/string/suffix-array.html
vector<int> suffixArray(string &s) {
    s+="#";
    int alphabet = 256,n=s.size(),limit=max(alphabet,n);
    int c[n],classes=0;
    int i=0,cnt[limit]={0};
    vector<int> p(n);// cnt(limit, 0);
    
    for (i = 0; i < n; ++i)
        ++cnt[s[i]];
    for (i = 1; i < alphabet; ++i)
        cnt[i] += cnt[i-1];
    for (i = 0; i < n; ++i)
        p[--cnt[s[i]]] = i;
    
    classes = 0;
    c[p[0]] = 0;
    
    for (int i = 1; i < n; ++i) {
        if(s[p[i-1]]!= s[p[i]])
            classes++;
        c[p[i]] = classes ;
    }
    classes++;
    
    int cn[n],pn[n];
    for (int h = 1; h < n; h<<=1) {
        for (i = 0; i < n; ++i) {
            pn[i] = p[i] - h;
            if (pn[i] < 0)
                pn[i] += n;
        }
        for(i=0;i<classes;++i)cnt[i]=0;
        for (i = 0; i < n; ++i)
            cnt[c[pn[i]]]++;
        for (i = 1; i < classes;++i)
            cnt[i] += cnt[i-1];
        for (i = n-1; i >= 0; --i)
            p[--cnt[c[pn[i]]]] = pn[i];
        
        cn[p[0]] = 0;
        classes = 0;
        for (i = 1; i < n; ++i) {
            pair<int, int> prev = make_pair(c[p[i-1]], c[(p[i-1] + h) % n]);
            pair<int, int> cur = make_pair(c[p[i]], c[(p[i] + h) % n]);
            if (prev != cur)
                ++classes;
            cn[p[i]] = classes;
        }
        classes++;
        loop(n)swap(c[i],cn[i]);
    }
    p.erase(p.begin());
    s.pop_back();
    return p;
}



int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s="abbac";
    vector<int> a=suffixArray(s);
    loop(a.size())cout<<a[i]<<" ";
    return 0;
}
