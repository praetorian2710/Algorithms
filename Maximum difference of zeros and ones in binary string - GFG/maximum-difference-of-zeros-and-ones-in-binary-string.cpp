//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    int max_so_far = INT_MIN, max_ending_here = 0;
 
        for (int i = 0; i < s.length(); i++) {
            if(s[i]=='1')
            max_ending_here = max_ending_here -1;
            else
            max_ending_here = max_ending_here +1;
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
     
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends