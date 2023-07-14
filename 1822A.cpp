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
        ll q,n;
        cin>>q>>n;
        vector<int> d;
        vector<int> e;
        ll ind=0,ev=0;
        fr(0,q-1){
            ll a;
            cin>>a;
            d.pb(a);
        }
        fr(0,q-1){
            ll a;
            cin>>a;
            e.pb(a);
        }
        fr(0,q-1){
            if(n-d[i]>=0){
                if(ev<e[i]){
                    ind=i;
                    ev=e[i];
                }
            }
        n--;
        }
        if(ev!=0){
        cout<<ind+1<<endl;
        continue;
        }
        cout<<-1<<endl;

    }
	return 0;
}