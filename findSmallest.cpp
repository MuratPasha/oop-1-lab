int findSmallest(int nums[],int numsSize)
{
    int smallest = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}