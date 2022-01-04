#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

// solution based on sliding window
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(n == 0) return 0;
        if(n == 1){
            if(k > a[0]) return 1;
            else return 0;
        } 
        
        long long int p = 1, i = 0, j = 0, count = 0;
        
        while(j < n){
            p = p*a[j];
            while(p >= k && i <= j){
                p = p/a[i];
                i++;
            }
            
            count = count + (j - i)+1;
            j++;
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
