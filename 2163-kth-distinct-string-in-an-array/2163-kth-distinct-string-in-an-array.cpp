class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        vector<pair<string, int>> ordered;
        for (string& s : arr) {
            freq[s]++;
        }
        for (string p : arr) {
            if (freq[p] == 1) {
                k--;
                if (k == 0) return p;
            }
        }

        return "";
    }
};