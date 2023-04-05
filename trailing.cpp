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
	int n;
    cin>>n;
    int f=5,s=0;
    int d=n/f;
    while (d!=0){
        s+=d;
        f*=5;
        d=n/f;
    }
    cout<<s;
}