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
        ll n,k;
        cin>>n>>k;
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        fr(0,k-1){
            string s;
            cin>>s;
            fr(0,n-1){
                if(s[i]=='+')
                v1[i]+=1;
                else
                v2[i]
            }
        }
    }
	return 0;
}