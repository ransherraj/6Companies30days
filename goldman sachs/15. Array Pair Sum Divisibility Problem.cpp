#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int s = 0;
        for(int i = 0; i<nums.size(); i++){
            s+= nums[i];
        }
        if(s % k != 0 ) return false;
        map <int, int> mp;
        int rem,freq;
        for(auto x : nums)
            mp[x%k]++;
            
        if(mp[0] %2 != 0) 
            return false;
            
        for(auto x : mp)
        {   rem = x.first;
            freq = x.second;
            if(rem!= 0 && mp[k-rem] != freq)
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
} 
