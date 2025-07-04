class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;
        vector<pair<string, int>> ordered;
        for (string& s : arr) {
            freq[s]++;
            if (freq[s] == 1) {
                ordered.push_back({s, 1});
            }
        }
        for (auto& p : ordered) {
            if (freq[p.first] == 1) {
                k--;
                if (k == 0) return p.first;
            }
        }

        return "";
    }
};