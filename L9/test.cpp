#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    // dp[i] 表示前i个字符能形成的不同的子序列个数
    vector<long long> dp(n + 1, 0);
    dp[0] = 1; // 空字符串有一种子序列（空序列）

    // 记录每个字符最后一次出现的位置
    vector<int> last(26, -1);

    for (int i = 1; i <= n; i++) {
        int char_idx = s[i-1] - 'a';
        // 当前字符可以和之前的所有子序列组成新子序列
        // 也可以单独作为一个子序列
        dp[i] = (2 * dp[i-1]) % MOD;

        // 如果这个字符之前出现过，需要减去重复计算的部分
        if (last[char_idx] != -1) {
            dp[i] = (dp[i] - dp[last[char_idx] - 1] + MOD) % MOD;
        }

        // 更新字符最后出现的位置
        last[char_idx] = i;
    }

    // 减去空序列
    cout << (dp[n] - 1 + MOD) % MOD << endl;

    return 0;
}