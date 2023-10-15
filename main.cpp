#include <iostream>
#include <fstream>

using namespace std;

/**
 * Calculate the sum of an array of integers.
 *
 * @param nums The array of integers.
 * @param numsSize The size of the array.
 * @return The sum of the integers in the array.
 */
int findSum(int nums[], int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return sum;
}

/**
 * Calculate the product of an array of integers.
 *
 * @param nums The array of integers.
 * @param numsSize The size of the array.
 * @return The product of the integers in the array.
 */
int findProduct(int nums[], int numsSize)
{
    int product = 1;
    for (int i = 0; i < numsSize; i++) {
        product *= nums[i];
    }
    return product;
}

/**
 * Calculate the average of an array of integers.
 *
 * @param nums The array of integers.
 * @param numsSize The size of the array.
 * @return The average of the integers in the array.
 */
double findAverage(int nums[], int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    double average = sum / numsSize;
    return average;
}

/**
 * Find the smallest integer in an array.
 *
 * @param nums The array of integers.
 * @param numsSize The size of the array.
 * @return The smallest integer in the array.
 */
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

/**
 * @brief The main function that  reads the input and processes data from file
 *
 * This function processes the data after reading an input file, calculates, and displays the results.
 * the sum, product, average, and the smallest integer in the array.
 *
 * @return 0 if the program runs successfully.
 */
int main() {
    // Open and check the file
    ifstream myFile("input.txt");
    if (!myFile.is_open()) {
        cout << "File failed to open" << endl;
        return 1;
    }

    int count;
    myFile >> count;

    if (count <= 0) {
        cout << "Invalid number count" << endl;
        return 1;
    }

    int nums[count];

    // Read numbers from file and place them in array
    for (int i = 0; i < count; i++) {
        int num;
        myFile >> num;
        nums[i] = num;
    }
    myFile.close();

    // Process the array and print the results
    int sum = findSum(nums, count);
    int product = findProduct(nums, count);
    double average = findAverage(nums, count);
    int smallest = findSmallest(nums, count);

    cout << "Sum is " << sum << endl;
    cout << "Product is " << product << endl;
    cout << "Average is " << average << endl;
    cout << "Smallest is " << smallest << endl;

    return 0;
}





