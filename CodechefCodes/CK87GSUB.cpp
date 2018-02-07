#include <bits/stdc++.h>
#define F first
#define S second
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a, b)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
int main() {
	std :: ios_base :: sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		ll ans = 0;
		int n = s.size();
		for(int i = 0; i < n;) {
			char curr = s[i];
			ll ct = 0;
			while(i < n and s[i] == curr) 
				ct++, i++;
			ans += (ct * (ct - 1)) / 2;
			if(i < n and i - ct - 1 >= 0) 
				if(s[i] == s[i - ct - 1])
					ans++;
		}
		cout << ans << endl;
	}
}
