#include<bits/stdc++.h>
using namespace std;

const int MAX_H = 1e5 + 10;
int freq[MAX_H]; // 存储每个亮度值的出现次数

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int max_val = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        max_val = max(max_val, x);
    }

    // 从大到小枚举可能的最大公约数g
    for (int g = max_val; g >= 1; --g) {
        int cnt = 0; // 统计g的倍数的总数量
        vector<int> candidates; // 存储候选的三个数（保证字典序）

        // 枚举g的倍数
        for (int j = g; j <= max_val; j += g) {
            cnt += freq[j];
            // 收集当前倍数的所有值（最多收集到3个，保证字典序）
            for (int k = 0; k < freq[j] && candidates.size() < 3; ++k) {
                candidates.push_back(j);
            }
        }

        // 找到足够数量的数，直接输出
        if (cnt >= 3) {
            // 输出前3个，保证字典序最小
            for (int i = 0; i < 3; ++i) {
                cout << candidates[i] << " ";
            }
            cout << endl;
            return 0;
        }
    }

    return 0;
}
