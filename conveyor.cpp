#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

using namespace std;
ll sub(ll a, ll b, ll c){
        b--;
        a--;
        a=min(a,c-1-a);
        b=min(b,c-1-b);
        return min(a,b);
    }
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        cout<<abs(sub(b,c,a)-sub(d,e,a))<<endl;
    }
    return 0;
}