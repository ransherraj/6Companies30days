#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    priority_queue<int> pq;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    int count = 0;
    while(!pq.empty() && count < 10){
        cout<<pq.top()<<" ";
        pq.pop();
        count++;
    }
    return 0;
}
