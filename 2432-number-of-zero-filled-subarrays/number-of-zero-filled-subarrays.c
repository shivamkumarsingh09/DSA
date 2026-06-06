long long zeroFilledSubarray(int* nums, int numsSize) {
    long long total_subarrays = 0;
    long long current_streak = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            current_streak++;
            total_subarrays += current_streak;
        } else {
            current_streak = 0;
        }
    }
    
    return total_subarrays;
}