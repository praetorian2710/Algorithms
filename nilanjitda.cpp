#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(ll i=a;i<=b;i++)
#define fr2(a,b) for(ll i=a;i>=b;i--)

using namespace std;

vector<int> makeTempArray(vector<int> res) {
    int n = res.size();
    int k = 2 * n;
    vector<int> temp;

    temp.insert(temp.begin(), res.begin(), res.end());
    temp.insert(temp.end(),res.begin(), res.end());
    return temp;
}

int main() {
    // Example usage
    vector<int> res = {1, 2, 3};
    vector<int> temp = makeTempArray(res);

    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}
