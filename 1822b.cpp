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
        priority_queue<int> pq;
        priority_queue <int, vector<int>, greater<int>> gq;
        fr(1,n){
            ll a;
            cin>>a;
            pq.push(a);
            gq.push(a);
        }
        ll a1=pq.top();
        ll b1=gq.top();
        pq.pop();
        gq.pop();
        ll a2=pq.top();
        ll b2=gq.top();
        ll ans1=a1*a2;
        ll ans2=b1*b2;
        cout<<max(ans1,ans2)<<endl;
    }
	return 0;
}