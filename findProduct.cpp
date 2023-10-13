int findProduct(int nums[], int numsSize)
{
    int product = 1;
    for (int i = 0; i < numsSize; i++) {
        product *= nums[i];
    }
    return product;
}