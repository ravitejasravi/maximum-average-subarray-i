class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int i, j = 0;
        double avg, sum = 0;

        for(i = 0 ; i < k; i++) 
            sum += nums[i];
        
        avg = sum;
        
        for(i = i; i < nums.size(); i++) {
            sum -= nums[j++];
            sum += nums[i];
            avg = max(avg, sum);
        }

        return avg / k;
    }
};