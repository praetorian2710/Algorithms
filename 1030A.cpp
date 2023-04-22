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
	#endif // ONLINE_JUDGEint n;
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(a==1)
		{
			cout<<"HARD";
			return 0;
		}
	}
	cout<<"EASY";
	return 0;
}