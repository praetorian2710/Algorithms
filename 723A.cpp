#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    double ans =abs((a[0]-a[2]));
	cout<<(int)ans;
	return 0;
}