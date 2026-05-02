class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Find the common difference
        int diff = arr[1] - arr[0];

        // Step 3: Check if all consecutive differences are equal
        for (int i = 2; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }

        return true;
    }
};