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
        ll p,q,r,s;
        cin>>p>>q>>r>>s;
        if((p>(q+r+s))||(q>(p+r+s))||(r>(q+p+s))||(s>(q+r+p)))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}