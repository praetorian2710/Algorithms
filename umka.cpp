#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;
vector<ll> v1;
bool check(ll r,ll s, ll t){
    if(t==1) return true;
    if(min(s,v1[t+1]+1-s)>v1[t+1]-v1[t]) return false;
    s=min(s,v1[t+1]+1-s);
    return check(s,r,t-1);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    int t;
    cin>>t;
    ll a,b,c;
    v1.pb(1);
    v1.pb(1);
    fr(0,45)
    v1.pb(v1[i]+v1[i+1]);
    while(t--){
        cin>>a>>b>>c;
        if(check(b,c,a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}