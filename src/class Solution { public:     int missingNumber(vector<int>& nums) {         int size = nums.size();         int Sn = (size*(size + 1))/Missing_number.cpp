class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int Sn = (size*(size + 1))/2;
        int sum = 0;
        for(int i : nums)
        {
            sum+=i;
        }
        return (Sn - sum);
    }
};
