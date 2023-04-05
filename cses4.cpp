#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i=a;i<=b;i++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        v.pb(a);
    }
    ll c=0;
    fr(1,n-1){
        if(v[i]<v[i-1]){
            c+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
        else{
            continue;
        }
    }
    cout<<c;
}