#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	   set <long long int> st;
	   st.insert(1);
	   n = n-1;
	   while(n--){
	        auto it = st.begin();
	        long long int temp = *it;
	        st.erase(it);
	        st.insert(temp*2);
	        st.insert(temp*3);
	        st.insert(temp*5);
	    } 
        return *st.begin();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
