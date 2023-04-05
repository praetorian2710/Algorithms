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
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=0;i<n+1;i++){
        v1.push_back(0);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1[a]=a;
    }
    for(int i=1;i<n+1;i++){
       if(v1[i]==0)
       cout<<i;
    }
    return 0;
}