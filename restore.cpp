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
    int t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        k--;
        vector<ll> v1(k),v2(k+1);
        fr(0,k-1)
        cin>>v1[i];
        v2[0]=v1[0];
        v2[k]=v1[k-1];
        fr(0,k-2)
        v2[i+1]=min(v1[i],v1[i+1]);
        fr(0,k)
        cout<<v2[i]<<" ";
        cout<<endl;
    }
    return 0;
}