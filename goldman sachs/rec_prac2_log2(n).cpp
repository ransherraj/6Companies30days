#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 1) return 0;
    return 1 + fun(n/2);
}

int main() {
	int n;
	cin >> n;
	cout<<fun(n);
	return 0;
}
