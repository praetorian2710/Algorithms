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
	ll n;
    cin>>n;
    fr(1,n){
    ll k=((i*i*i*i-i*i)/2-4*(i-1)*(i-2));
    cout<<k<<endl;
    }
    return 0;
}