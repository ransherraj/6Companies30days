class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), temp = 0;
        int sum = 0, i = 0, j = 0, len = INT_MAX;
        while(i < n){
            sum += nums[i++];
            while(sum >= target){
                len = min(len, i - j );
                sum -= nums[j++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};
