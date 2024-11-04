class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
         int lsum = 0; 
        int rsum = 0; 
        int maxSum = 0;
        int n = nums.size();
        
        // Calculate the sum of the first k elements from the left
        for (int i = 0; i < k; i++) {
            lsum += nums[i];
        }

        maxSum = lsum; // Initialize maxSum with the left sum
        int rindex = n - 1;

        // Calculate the maximum score by shifting the window from left to right
        for (int i = k - 1; i >= 0; i--) {
            lsum -= nums[i]; // Remove the leftmost element of the current window
            rsum += nums[rindex]; // Add the rightmost element from the right end
            rindex--; // Move the right index to the left
            
            maxSum = std::max(maxSum, lsum + rsum); // Update maxSum
        }

        return maxSum;
        
    }
};