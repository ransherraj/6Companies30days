#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
  //Your code here
  string res = "";
  int count  = 1, n = s.length(), i = 0, j = 0;
  for(int i = 1; i<n; i++){
      if(s[i] == s[i-1]){
          count++;
      }
      else{
          res += s[i-1] + to_string(count);
          count = 1;
      }
  }
  res += s[n-1] + to_string(count);
  return res;
}   
