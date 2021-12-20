#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 100010;

vector <int> g[N];
ll ans[N], t[N << 2], lazy[N << 2];
int tests, cs, n, q, p[N], in[N], out[N], ptr;

void go (int u = 1, int par = -1) {
  p[u] = par, in[u] = ++ptr;
  for (int v : g[u]) if (v ^ par) go(v, u);
  out[u] = ptr;
}

void init (int u = 1, int b = 1, int e = n) {
  lazy[u] = 0;
  if (b == e) return void(t[u] = 0);
  int mid = b + e >> 1;
  init(u << 1, b, mid); init(u << 1 | 1, mid + 1, e);
  t[u] = __gcd(t[u << 1], t[u << 1 | 1]);
}

inline void push (int u, int b, int e) {
  if (b ^ e) {
    lazy[u << 1] = __gcd(lazy[u << 1], lazy[u]);
    lazy[u << 1 | 1] = __gcd(lazy[u << 1 | 1], lazy[u]);
  } else {
    t[u] = __gcd(t[u], lazy[u]);
  }
  lazy[u] = 0;
}

void update (int l, int r, ll v, int u = 1, int b = 1, int e = n) {
  if (lazy[u]) push(u, b, e);
  if (b > r or e < l) return;
  if (b >= l and e <= r) {
    lazy[u] = __gcd(lazy[u], v);
    return push(u, b, e);
  }
  int mid = b + e >> 1;
  update(l, r, v, u << 1, b, mid); 
  update(l, r, v, u << 1 | 1, mid + 1, e);
  t[u] = __gcd(t[u << 1], t[u << 1 | 1]);
}

ll query (int p, int u = 1, int b = 1, int e = n) {
  if (lazy[u]) push(u, b, e);
  if (b == e) return t[u];
  int mid = b + e >> 1;
  if (p <= mid) return query(p, u << 1, b, mid);
  return query(p, u << 1 | 1, mid + 1, e);
}

int main() {
  cin >> tests;
  while (tests--) {
    scanf("%d %d", &n, &q);
    for (int i = 1; i <= n; ++i) g[i].clear();
    vector <tuple <int, ll, int, int>> ed(n - 1);
    for (auto &[cap, cost, u, v] : ed) {
      scanf("%d %d %d %lld", &u, &v, &cap, &cost);
      g[u].emplace_back(v); g[v].emplace_back(u);
    }
    ptr = 0; go();
    vector <tuple <int, int, int>> queries(q);
    for (int i = 0; i < q; ++i) {
      auto &[weight, u, id] = queries[i];
      scanf("%d %d", &u, &weight); id = i;
    }
    sort(ed.begin(), ed.end());
    sort(queries.begin(), queries.end());
    init();
    for (int i = 0, j = 0; i < q; ++i) {
      auto [weight, u, id] = queries[i];
      while (j < n - 1) {
        auto [cap, cost, u, v] = ed[j];
        if (cap > weight) break; ++j;
        if (v == p[u]) swap(u, v);
        update(in[v], out[v], cost);
      }
      ans[id] = query(in[u]);
    }
    printf("Case #%d:", ++cs);
    for (int i = 0; i < q; ++i) printf(" %lld", ans[i]);
    puts("");
  }
  return 0;
}

