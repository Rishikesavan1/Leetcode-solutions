class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int prefsum = 0;
        unordered_map<int,int> mp = {{0,1}};
        for(auto a : nums){
            prefsum += a;
            cnt += mp[prefsum-k];
            mp[prefsum] += 1;
        }
        return cnt;
    }
};