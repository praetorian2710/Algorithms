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
    ll n,k;
    cin>>n>>k;
    ll c=0;
    fr(1,n){
        ll a;
        bool t=true;
        cin>>a;
        set<int> s;
        for(ll j=a;j!=0;j=j/10){
            if(j%10<=k){
                s.insert(j%10);
            }
            else{
                t=false;
                break;
            }
        }
        if(t&&s.size()==k+1)
        c++;
    }
    cout<<c;
	return 0;
}