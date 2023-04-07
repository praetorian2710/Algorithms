#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;
ll gcd(ll a, ll b)
{
    return (a%b == 0)? abs(b) : gcd(b,a%b);
}
bool ans(ll a, ll b, ll c)
{
    return (c%gcd(a,b) == 0);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        x=2;
        cin>>z>>y;
        if(ans(x,y,z))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}