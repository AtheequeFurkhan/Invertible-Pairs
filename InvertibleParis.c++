#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate maximum subarray sum using Kadane's algorithm
long long maxSubarraySum(const vector<int>& arr) {
    long long max_sum = arr[0];
    long long current_sum = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        current_sum = max((long long)arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Calculate the maximum subarray sum for the original array
        long long maxOriginal = maxSubarraySum(A);

        // Create the modified array with alternate flipping
        vector<int> flippedA(N);
        for (int i = 0; i < N; i++) {
            flippedA[i] = (i % 2 == 0) ? A[i] : -A[i];
        }

        // Calculate the maximum subarray sum for the flipped array
        long long maxFlipped = maxSubarraySum(flippedA);

        // Output the maximum of the two results
        cout << max(maxOriginal, maxFlipped) << "\n";
    }

    return 0;
}
