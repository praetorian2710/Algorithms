#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i=a;i<=b;i++)

using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll n;
    cin>>n;
    cout<<n<<" ";
    while (n!=1){
        if(n%2==0)
        n=n/2;
        else
        n=n*3+1;
        cout<<n<<" ";
    }
    return 0;
	
}