#include <bits/stdc++.h>
#define ll int
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)

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
        int p=0;
        vector<ll>v;
        for(ll i=n;i!=0;i=i/10){
            ll d= i%10;
            int ans;
            if(p==0){
                ans=d*1;
            }
            if(p==1){
                ans=d*10;
            }
            if(p==2){
                ans=d*100;
            }
            if(p==3){
                ans=d*1000;
            }
            if(p==4){
                ans=d*10000;
            }
            p++;
            if(ans!=0)
            v.pb(ans);
        }
        cout<<v.size()<<endl;
        fr(0,v.size()-1)
        cout<<v[i]<<" ";
        cout<<endl;
    }
	return 0;
}