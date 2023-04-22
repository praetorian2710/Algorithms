#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr1(a,b) for(ll j =a;j<=b;j++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        ll c=0;
        cin>>n>>m;
        ll v[n][n];
        fr(0,n-1){
            fr1(0,n-1)
            cin>>v[i][j];
        }
        fr(0,n-1){
            fr1(0,n-1)
            {
                if(v[i][j]==v[n-i-1][n-j-1])
                c++;
            }
        }
        cout<<(c>m?"YES":"NO");
        cout<<endl;
    }
	return 0;
}