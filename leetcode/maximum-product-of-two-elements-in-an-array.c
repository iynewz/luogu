//https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/submissions/

int maxProduct(int* nums, int numsSize){

    int max = nums[0];
    int target;
    for (int k = 0; k < numsSize; k++) {
        if (nums[k] >= max) {
            max = nums[k];
            target = k;
        }
    }
    int max2 = target == 0 ? nums[1] : nums[0];
    for (int q = 0; q < numsSize; q++) {
        if (q != target) {
            if (nums[q] >= max2) {
                max2 = nums[q];
            }
        }
    }
    return ((max - 1) * (max2 - 1));    
}