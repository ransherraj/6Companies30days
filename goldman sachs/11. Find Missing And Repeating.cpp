#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int r, m;
        
        for(int i = 0; i<n; i++){
            if(arr[abs(arr[i]) - 1] > 0 ){
               arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
            }
            else r = abs(arr[i]);
        }
        
        for(int i = 0; i<n; i++){
            if(arr[i] > 0) {
                m = i+1;
            }
        }
        
        int *res = new int[2];
        res[0] = r, res[1] = m;
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}