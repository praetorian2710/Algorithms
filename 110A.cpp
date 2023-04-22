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
    ll n,c=0;
    cin>>n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            c += 1;
        }
        n /= 10;
    }
    // cout<<n<<endl;
    // cout<<c<<endl;
    if(c==0){
        cout<<"NO";
        return 0;
    }
   for(int i=c;i!=0;i=i/10){
        if(i%10!=7&&i%10!=4){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
	return 0;
}