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
        string s;
        cin>>s;
        ll c=1;
        for(ll i=0;i<s.length();i++){
            if(s[i]=='?'){
                if(i==0)
                c=c*9;
                else
                c=c*10;
            }
        }
        if(s[0]=='0'){
            cout<<0<<endl;
            continue;
        }
        cout<<c<<endl;
    }
	return 0;
}