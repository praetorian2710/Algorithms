#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	ll a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);
    ans=max(ans,a+b+c);

	cout << ans << endl;
	return 0;
}