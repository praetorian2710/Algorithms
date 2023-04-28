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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector <int> v;
        ll s=0;
        fr(1,n){
          s+=i;
          ll r=s%n;
          v.pb(r+1);
        }
        if(n&1==1 && n!=1){
            cout<<-1<<endl;
            continue;
        }
        fr(0,n-1){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}