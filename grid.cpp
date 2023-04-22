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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        fr(0,n-1){
            int a;
            cin>>a;
            v.pb(a);
        }
        bool f=true;
        for(int i=n-1;i>0;i-=2){
            if(v[i]<v[i-1]){
                if(i-1==0)
                f=false;
                else
                v[i-2]-=(v[i-1]-v[i]);
            }
            else{
                if(i-2>=0)
                v[i-2]+=(v[i]-v[i-1]);
            }

        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}