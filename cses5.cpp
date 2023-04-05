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
    cin >> n;
    if (n == 1)
    {
        cout << "1";
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 4)
    {
        cout << "3 1 4 2";
    }
    else
    {
        // print odds
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        // print evens
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}