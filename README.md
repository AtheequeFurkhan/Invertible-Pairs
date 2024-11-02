Given an integer array \( A \) (1-indexed) with even length \( n \), you can perform the following operation as many times as you want: choose a pair of positions \( 2k - 1 \) and \( 2k \), and multiply both \( A[2k - 1] \) and \( A[2k] \) by \(-1\). After finishing your operations, you must compute the maximum subarray sum of the resulting array, aiming to maximize this value.

The input format is as follows: The first line contains an integer \( T \), the number of test cases. The following lines describe each test case. The first line of each test case contains an even integer \( N_i \), the length of the array. The second line contains \( N_i \) integers, \( A_1, A_2, \ldots, A_{N_i} \), representing the elements of the array.

For each test case, the output should be a single line containing the maximum subarray sum for the modified array.

The constraints are as follows: \( 1 \leq T \leq 10^5 \); \( 1 \leq \sum_{i=1}^T N_i \leq 4 \times 10^5 \); \( 2 \leq N_i \leq 2 \times 10^5 \) for each test case \( i \); \( N_i \) is even for every test case; and \( |A_j| \leq 10^4 \) for every element \( A_j \) in the array.
