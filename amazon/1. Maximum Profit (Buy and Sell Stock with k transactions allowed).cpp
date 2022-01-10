#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
     int dp[501][2][201];
    
    int profit(int i, int own, int k, int p[], int n){
        if(i == n || k == 0) return 0;
        
        if(dp[i][own][k] != -1) return dp[i][own][k];
        
        if(own){
            int opt1 = p[i] + profit(i+1, 0, k-1, p, n);
            int opt2 = profit(i+1, 1, k, p, n);
            return dp[i][own][k] = max(opt1, opt2);
        }
        else{
            int opt1 = -p[i] + profit(i+1, 1, k, p, n);
            int opt2 = profit(i+1, 0, k, p, n);
            return dp[i][own][k] = max(opt1, opt2);
        }
    }
    
    int maxProfit(int k, int n, int prices[]) {
        
        if(n==0) return 0;
        memset(dp, -1, sizeof(dp));
        return profit(0, 0, k, prices, n);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
} 
