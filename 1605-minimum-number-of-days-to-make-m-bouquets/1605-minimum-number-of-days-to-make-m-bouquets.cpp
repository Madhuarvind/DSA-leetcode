class Solution {
public:
bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size();
    int cnt = 0;
    int noOfB = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k); // <-- division
            cnt = 0;
        }
    }
    noOfB += (cnt / k); // add leftover bouquets
    return noOfB >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL * m * k;
        if (total > bloomDay.size()) return -1; // impossible case

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1; // try earlier day
            } else {
                low = mid + 1; // need more days
            }
        }
        return ans;
    }
};