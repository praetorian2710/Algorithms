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
        int n;
        cin >> n;
        int arr[n];
        fr(0,n-1)
        cin>>arr[i];
        int ne=0,p=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==-1)
            ne=i+1;
            else
            p=i+1;
        }
        cout<<abs(p-ne)<<endl;
    }
	return 0;
}