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
	ll n,k,s=0,max=0,ml;
    cin>>n>>k;
    vector<ll>v;
    fr(0,n-1){
        ll a;
        cin>>a;
        v.pb(a);
    } 
    fr(0,k-1)
    s+=v[i];
    max=s;
    ml=0;
    ll l=0,r=k-1;
    while(r<=n-2){
        r++;
        s+=v[r];
        s-=v[l];
        l++;
        if(max>s)
        {
            max=s;
            ml=l;
        }
    }
    cout<<ml+1;
    return 0;
    
}