#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    std::cin >> n >> q;

    std::vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    // 前処理
    std::sort(a.begin(), a.end());

    std::vector<long long> prefix_sum(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }

    long long max_a = (n > 0) ? a[n - 1] : 0;

    // クエリ処理
    for (int j = 0; j < q; ++j) {
        long long b;
        std::cin >> b;

        if (b > max_a) {
            std::cout << -1 << "\n";
            continue;
        }

        long long k = b - 1;

        // A[i] <= k となる要素の数を探す
        // std::upper_boundは k より大きい最初の要素のイテレータを返す
        auto it = std::upper_bound(a.begin(), a.end(), k);
        int p = std::distance(a.begin(), it);

        // sum(min(A_i, k)) を計算
        // A_i <= k の部分の和
        long long sum_le_k = prefix_sum[p];
        // A_i > k の部分の和
        long long sum_gt_k = (long long)(n - p) * k;

        long long sum_min = sum_le_k + sum_gt_k;

        // 必要なxの最小値
        long long x = sum_min + 1;
        std::cout << x << "\n";
    }

    return 0;
}