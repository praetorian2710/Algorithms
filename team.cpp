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
    int n,c1=0;
    cin>>n;
    fr(0,n-1){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        c1++;
    }
    cout<<c1;
    return 0;
}