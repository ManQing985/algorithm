#include <iostream>
using namespace std;

int cnt = 0;  // 计数器
int m;         // 用于存储第 m 步

// 递归解决汉诺塔问题
void hanoi(string A, string B, string C, int n) {
    if (n == 1) {
        cnt++;
        if (cnt == m) {  // 如果找到了第 m 步
            cout << "#" << n << ": " << A << "->" << C << endl;
        }
    } else {
        hanoi(A, C, B, n - 1);  // 第一步
        cnt++;
        if (cnt == m) {  // 如果找到了第 m 步
            cout << "#" << n << ": " << A << "->" << C << endl;  // 第二步
        }
        hanoi(B, A, C, n - 1);  // 第三步
    }
}

int main() {
    int n;  // 盘子的数量
    cin >> n >> m;  // 读取盘子数量和目标步骤
    hanoi("A", "B", "C", n);  // 递归调用汉诺塔函数
    cout << cnt << endl;  // 输出递归的总步数
    return 0;
}
