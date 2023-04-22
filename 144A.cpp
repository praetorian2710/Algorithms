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
    int n,m=0,mind,l=INT_MAX,lind;
    cin>>n;
    vector<int>v;
    fr(0,n-1){
        int a;
        cin>>a;
        v.pb(a);
    }
    fr2(n-1,0){
        if(m<=v[i]){
            m=v[i];
            mind=i; 
            }
    }
    fr(0,n-1){
        if(l>=v[i]){
            l=v[i];
            lind=i; 
            }
    }
    // cout<<lind<<endl;
    // cout<<mind<<endl;
    if(mind<lind){
        lind=-lind+n-1;
        cout<<lind+mind;
    }
    else{ 
        lind=-lind+n-1;
       cout<<lind+mind-1;
    }
	return 0;
}