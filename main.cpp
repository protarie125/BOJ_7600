#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;
vl ct;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  getline(cin, s);
  while (s != "#") {
    ct = vl(26, 0);
    for (const auto& x : s) {
      if ('a' <= x && x <= 'z') {
        ct[x - 'a'] = 1;
      } else if ('A' <= x && x <= 'z') {
        ct[x - 'A'] = 1;
      }
    }

    const auto& ans = accumulate(ct.begin(), ct.end(), 0LL);
    cout << ans << '\n';

    getline(cin, s);
  }

  return 0;
}