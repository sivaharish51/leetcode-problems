class Solution {
public:
    int clumsy(int n) {
        stack<int> s;
        s.push(n--);
        int idx = 0;

        while (n > 0) {
            if (idx % 4 == 0) {
                s.top() *= n;
            } else if (idx % 4 == 1) {
                s.top() /= n;
            } else if (idx % 4 == 2) {
                s.push(n);
            } else {
                s.push(-n);
            }
            idx++;
            n--;
        }

        int result = 0;
        while (!s.empty()) {
            result += s.top();
            s.pop();
        }
        return result;
    }
};