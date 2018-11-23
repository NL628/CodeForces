// COMPETITION: Codeforces
// URL: bit.ly/2DVyznw
// DATE: Nov 23, 2018
// STATUS: Finished

#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double> pd;
typedef pair<int, int> pi;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second

const double PI = 4 * atan(1);
const int MOD = 1000000007;
const ll LINF = 1ll << 60;
const int INF = 1 << 30;

const int MX = 2e5 + 5;
int n, a[MX], b[MX], x[MX], p[MX];
string s;

int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  
  sort(b + 1, b + n + 1);
  
  for (int i = 1; i <= n; i++)
    x[b[i]] = i;
  
  cin >> s;
  
  p[1] = (s[0] == '1');
  for (int i = 2; i <= n; i++)
    p[i] = p[i - 1] + (s[i - 1] == '1');
  
  for (int i = 1; i <= n; i++)
    if (i > x[a[i]] && p[i - 1] - p[x[a[i]] - 1] != i - x[a[i]]) {
      cout << "NO" << endl;
      return 0;
    }
  
  cout << "YES" << endl;
}
