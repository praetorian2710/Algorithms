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
        ll n,k,z;
        bool t=false;
        cin>>n>>k;
        fr(1,n){
            ll r=(i*(i-1)+(n-i)*(n-i-1))/2;
            if(r==k)
            {
                z=r;
                t=true;
                break;
            }
        }
        if(t){
        cout<<"YES"<<endl;
        fr(1,z)
        cout<<"-1"<<" ";
        fr(1,n-z)
        cout<<"1"<<" ";
        cout<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
	return 0;
}