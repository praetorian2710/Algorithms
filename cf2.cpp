#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

#include <bits/stdc++.h>
using namespace std;

void answer(vector<ll> arr, int n)
{
	
	int max = 1, len = 1, maxIndex = 0;
	
	for (int i=1; i<n; i++)
	{
		
		if (arr[i] > arr[i-1])
			len++;
		else
		{
			if (max < len)
			{
				max = len;
				maxIndex = i - max;
			}
				
			len = 1;
		}
	}
	
	if (max < len)
	{
		max = len;
		maxIndex = n - max;
	}

    cout<<maxIndex<<" "<<max+maxIndex<<endl;
}

// Driver program to test above
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	#endif // ONLINE_JUDGE
	ll t;
    cin>>t;
    while(t--){
        ll n,a;
        cin>>n;
        fr(0,n-1)
        cin>>a;
        vector<ll>v;
        fr(0,n-1){
            cin>>a;
            v.pb(a);
        }
        answer(v,n);

    }
	return 0;	
}
// This code is contributed by Dharmendra kumar
