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
    ll t;
	cin>>t;
    while(t--){
        ll n,b,a,s=0;
        double curr=0.0,max=0.0;
        vector<int> v;
        cin>>n>>b>>a;
        fr(0,n-1){
            ll k;
            cin>>k;
            s+=k;
            v.pb(s);
        }
        fr(a-1,b-1){
            for(ll j=i;j<=n-1;j++){
                if(j==i){
                    curr=v[j]/(i+1)*1.0;
                }
                else
                curr=(v[j]-v[j-i-1])/(i+1)*1.0;
                if(max<curr){
                    max=curr;
                }
            }
        }
        cout<<max<<endl;
    }
    return 0;
}