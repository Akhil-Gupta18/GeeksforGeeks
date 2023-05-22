//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int M) {
        // code here
         // code here
         int maxConsecutiveOnes = 0;  
    int zerosCount = 0;         
    int left = 0;               

    for (int right = 0; right < n; right++) {
        if (arr[right] == 0) {
            zerosCount++;
        }

        while (zerosCount > M) {
            if (arr[left] == 0) {
                zerosCount--;
            }
            left++;
        }

        maxConsecutiveOnes = max(maxConsecutiveOnes, right - left + 1);
    }

    return maxConsecutiveOnes;
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