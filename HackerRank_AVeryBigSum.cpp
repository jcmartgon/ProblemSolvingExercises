// Author: Jesus Carlos Martinez Gonzalez
// Date: 11/06/2020
// Solution to: https://www.hackerrank.com/challenges/a-very-big-sum/problem
// Language: C++
// Problem to solve: Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large

// Logic: Iterate over each element of the vector and add it to sum, then return sum.
long aVeryBigSum(vector<long> ar) {
    int size = ar.size();
    long sum = 0;
    for (int i = 0; i < size; i++) sum += ar[i];
    return sum;
}