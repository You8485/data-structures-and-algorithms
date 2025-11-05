#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getDivisors(int N) {
        vector<int> res;
        for (int i = 1; i * i <= N; ++i) {
            if (N % i == 0) {
                res.push_back(i);
                if (i != N / i) res.push_back(N / i);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution sol;
    int N = 36;
    for (int val : sol.getDivisors(N)) cout << val << " ";
    cout << endl;
}
