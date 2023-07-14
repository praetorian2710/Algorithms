#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(!isPowerOfTwo(m)){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            ll q=n,flag=1;
            while(q!=0||q==m){
                ll a=q/3;
                ll b=2*a;
                if((a==m||b==m)&&q%3==0){
                    cout<<"YES"<<endl;
                    
                    flag=-1;
                    break;
                }
                q=b;
            }
            if(flag==1)
            cout<<"NO"<<endl;
        }
    }
	return 0;
}