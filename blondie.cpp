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
    int t;
    cin>>t;
    while(t--){
	vector<int> v1;
    int n,s=0,t;
    cin>>n;
    fr(0,n-1){
        int a;
        cin>>a;
        if(a==-1){
           a= round(s/i);
        v1.pb(a);
        }
        else{
        v1.pb(a);
        }
        s+=a;
    }
    fr(0,n-1)
    cout<<v1[i]<<" ";
    cout<<endl;
    }
    return 0;
}