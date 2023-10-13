double findAverage(int nums[], int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    double average = sum / numsSize;
    return average;
}