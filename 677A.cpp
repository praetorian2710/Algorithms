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
    ll n,h;
    cin>>n>>h;
    ll ans=0;
    fr(1,n){
        ll a;
        cin>>a;
        if(a>h)
        ans+=2;
        else
        ans++;
    }
    cout<<ans;
	return 0;
}