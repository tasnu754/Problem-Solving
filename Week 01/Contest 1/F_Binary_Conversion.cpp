#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        vector<int> A(n);

        for (int i = 0; i < n; i++) {
            cin >> A[i]; // Read the elements of the array
        }

        int totalSum = 0;
        int firstOddIndex = -1;
        int lastOddIndex = -1;

        // Calculate the total sum and find odd indices
        for (int i = 0; i < n; i++) {
            totalSum += A[i];
            if (A[i] % 2 != 0) { // If the number is odd
                if (firstOddIndex == -1) {
                    firstOddIndex = i; // Record the first odd index
                }
                lastOddIndex = i; // Update the last odd index
            }
        }

        if (totalSum % 2 == 0) {
            cout << n << endl; // The whole array has an even sum
        } else {
            // Calculate the largest subarray by removing one odd element
            int largestSubarraySize = 0;

            // If we have odd numbers, check the possible subarrays
            if (firstOddIndex != -1 && lastOddIndex != -1) {
                // Remove first odd
                largestSubarraySize = max(largestSubarraySize, n - 1 - firstOddIndex);
                // Remove last odd
                largestSubarraySize = max(largestSubarraySize, lastOddIndex);
            }

            cout << largestSubarraySize << endl;
        }
    }

    return 0;
}
