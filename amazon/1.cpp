#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int maxx = *max_element(arr.begin(), arr.end());
        int minn = *min_element(arr.begin(), arr.end());
        cout<<maxx-minn<<endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; 
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}

