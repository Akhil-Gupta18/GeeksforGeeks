//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int M) {
        int ma = 0;
        int r = 0;
        int l = 0;
        int z = 0;
        for(int r = 0;r<n;r++)
        {
            if(arr[r] == 0)
            z++;
            while(z>M)
            {
                if(arr[l] == 0)
                z--;
                l++;
            }
            ma = max(ma,r-l+1);
        }
        return ma;
    }  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, m;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> m;
        Solution ob;
        auto ans = ob.findZeroes(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends