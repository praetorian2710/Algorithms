//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool decode (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << decode (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool decode (string s)
{
    string c="hello";
    // for (auto& x : s) {
    //     x = tolower(x);
    // }
    int l=0,h=0;
    while(l!=c.length()&&h!=s.length()){
        if(c[l]==s[h])
        {
            l++;
            h++;
        }
        else{
            h++;
            continue;
        }
    }
    if(l==c.length())
    return true;
    return false;
}