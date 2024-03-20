#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        vector<int> arr(n); // Array elements

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<pair<int, int>> operations;

        while (true) {
            // Find the maximum element in the array
            int max_element =-1000;

           for(int i=0;i<n;i++){
            max_element=max(max_element,arr[i]);
           }
            // Check if the array is already non-decreasing
            bool is_non_decreasing = true;
            for (int i = 0; i < n - 1; ++i) {
                if (arr[i] > arr[i + 1]) {
                    is_non_decreasing = false;
                    break;
                }
            }

            if (is_non_decreasing) {
                break; // Array is already non-decreasing
            }

            // Perform operations to make all elements equal to the largest element
            for (int i = 0; i < n; ++i) {
                while (arr[i] < max_element) {
                    int j = i + 1;
                    while (j < n && arr[j] == max_element)
                        ++j;

                    if (j < n && arr[j] > max_element) {
                        operations.push_back(make_pair(j + 1, i + 1));
                        arr[j] += arr[i];
                    } else {
                        operations.push_back(make_pair(i + 1, j + 1));
                        arr[i] += arr[j];
                    }
                }
            }
        }

        int k = operations.size();

        // Output the result
        cout << k << endl;
        for (const auto& op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }

    return 0;
}
