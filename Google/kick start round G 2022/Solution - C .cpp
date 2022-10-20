#if defined LOCAL && !defined ONLINE_JUDGE
#include "debug.cpp"
#else 
#include <bits/stdc++.h>
using namespace std;
#define dbg(...) ;
#endif

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define mem(x, n) memset(x, n, sizeof(x))
#define all(x) x.begin(), x.end()
#define len(x) ((int)(x).size())
#define vec vector

inline bool read(auto &...a) { return (((cin >> a) ? true : false) && ...); }

inline void print(const auto &...a) { ((cout << a), ...); }
inline void println(const auto &...a) { print(a..., '\n'); }

template <typename T, T(*op)(T, T)>
struct SegTree
{
private:
	std::vector<T> segt;
	int n;
	T e;
	int left(int si) { return si * 2; }
	int right(int si) { return si * 2 + 1; }
	int midpoint(int ss, int se) { return (ss + (se - ss) / 2); }
	T query(int ss, int se, int qs, int qe, int si)
	{
		if (se < qs || qe < ss)
			return e;
		if (qs <= ss && qe >= se)
			return segt[si];
		int mid = midpoint(ss, se);
		return op(query(ss, mid, qs, qe, left(si)), query(mid + 1, se, qs, qe, right(si)));
	}
	void update(int ss, int se, int key, int si, T val)
	{
		if (ss == se)
		{
			segt[si] = val;
			return;
		}
		int mid = midpoint(ss, se);
		if (key > mid)
			update(mid + 1, se, key, right(si), val);
		else
			update(ss, mid, key, left(si), val);
		segt[si] = op(segt[left(si)], segt[right(si)]);
	}
	void build(const std::vector<T> &a, int si, int ss, int se)
	{
		if (ss == se)
		{
			segt[si] = a[ss];
			return;
		}
		int mid = midpoint(ss, se);
		build(a, left(si), ss, mid);
		build(a, right(si), mid + 1, se);
		segt[si] = op(segt[left(si)], segt[right(si)]);
	}
public:
	SegTree() : n(0) {}
	SegTree(int sz, T _e)
	{
		this->e = _e;
		this->n = sz;
		segt.resize(n * 4 + 5, _e);
	}
	SegTree(const std::vector<T> &arr, T _e) : SegTree((int)arr.size(), _e) { init(arr); }
	void init(const std::vector<T> &arr) { this->n = (int)(arr.size());build(arr, 1, 0, n - 1); }
	T get(int qs, int qe) { return query(0, n - 1, qs, qe, 1); }
	void set(int key, T val) { update(0, n - 1, key, 1, val); }
};

int op(int a, int b)
{
	return min(a, b);
}


void run_case([[maybe_unused]] const int &TC)
{
	ll n;
	read(n);

	auto a = vec(n, 0LL);
	for (auto &x : a)
		read(x);

	ll res = 0;

	SegTree<int, op> sgt((int)n + 5, INT_MAX);

	map<ll, deque<ll>> mp;
	vec<ll> pre_set;
	ll csum = 0;
	for (ll i = 0; i < n; i++)
	{
		csum += a[i];
		if (mp.count(csum) == 0) pre_set.push_back(csum);
		mp[csum].push_back(i);
	}

	sort(all(pre_set));

	ll ci = 1;
	map<ll, ll> ind;
	for (auto &x : mp)
	{
		sgt.set((int)ci, (int)x.second.front());
		ind[x.first] = ci;
		ci++;
	}

	ll curr_n = 0;

	auto cut = vec(n + 1, 0LL);
	ll sum = 0;
	csum = 0;

	auto find_j = [&]() -> ll
	{
		auto bin = int((upper_bound(all(pre_set), csum - 1)) - pre_set.begin());
		auto q = sgt.get(0, bin);

		if (q == INT_MAX) return n;
		return q;
	};

	for (ll i = 0; i < n; i++)
	{
		auto j = find_j();
		cut[j]++;

		curr_n -= cut[i];
		curr_n++;
		sum += (j - i);
		dbg(csum);
		dbg(i, j, curr_n, sum);
		res += a[i] * sum;

		csum += a[i];
		mp[csum].pop_front();
		if (mp[csum].empty())
		{
			sgt.set((int)ind[csum], INT_MAX);
		}
		else
		{
			sgt.set((int)ind[csum], (int)mp[csum].front());
		}
		sum -= curr_n;
	}

	println("Case #", TC, ": ", res);
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(0);

	int tt = 1;
	read(tt);

	for (int tc = 1; tc <= tt; tc++)
		run_case(tc);

	return 0;
}