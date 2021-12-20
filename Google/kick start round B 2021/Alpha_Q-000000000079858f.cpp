#include <bits/stdc++.h>

using namespace std;

const int N = 500010;

long long a[N];
int t, cs, n, len[N];

int main() {
  cin >> t;
  while (t--) {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
      scanf("%lld", a + i);
    }
    int ans = 2;
    len[n] = 1;
    for (int i = n - 1; i >= 1; --i) {
      len[i] = 2;
      long long d = a[i + 1] - a[i];
      if (i + 2 <= n and a[i + 2] - a[i + 1] == d) {
        len[i] = 1 + len[i + 1];
      }
    }
    for (int i = 1; i < n; ++i) {
      ans = max(ans, len[i]);
      int j = i + len[i], d = a[i + 1] - a[i];
      if (i > 1) ans = max(ans, len[i] + 1);
      if (j <= n) {
        long long new_j = a[j - 1] + d;
        ans = max(ans, len[i] + 1);
        if (j + 1 <= n and a[j + 1] - new_j == d) {
          ans = max(ans, len[i] + 2); ++j;
          if (j + 1 <= n and a[j + 1] - a[j] == d) {
            ans = max(ans, len[i] + 1 + len[j]);
          }
        }
      }
    }
    reverse(a + 1, a + n + 1);
    len[n] = 1;
    for (int i = n - 1; i >= 1; --i) {
      len[i] = 2;
      long long d = a[i + 1] - a[i];
      if (i + 2 <= n and a[i + 2] - a[i + 1] == d) {
        len[i] = 1 + len[i + 1];
      }
    }
    for (int i = 1; i < n; ++i) {
      ans = max(ans, len[i]);
      int j = i + len[i], d = a[i + 1] - a[i];
      if (i > 1) ans = max(ans, len[i] + 1);
      if (j <= n) {
        long long new_j = a[j - 1] + d;
        ans = max(ans, len[i] + 1);
        if (j + 1 <= n and a[j + 1] - new_j == d) {
          ans = max(ans, len[i] + 2); ++j;
          if (j + 1 <= n and a[j + 1] - a[j] == d) {
            ans = max(ans, len[i] + 1 + len[j]);
          }
        }
      }
    }
    printf("Case #%d: %d\n", ++cs, ans);
  }
  return 0;
}

