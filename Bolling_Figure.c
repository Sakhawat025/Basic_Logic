#include <stdio.h>
typedef long long ll;
ll T, N, i, j, R, Ans;
void solve() {
    char S[100001];
    scanf("%s", S);
    N = 0;
    while (S[N] != '\0') {
        N++;
    }
    R = Ans = 0;
    for (int idx = 0; idx < N; ++idx) {
        char ch = S[idx];
        if (ch == 'W') {
            Ans++;
        } else {
            R += (ch - '0');
        }
    }
    i = N / 6;
    j = N % 6;
    printf("%lld.%lld Over%s %lld Run%s %lld Wicket%s.\n", i, j, (N > 6) ? "s" : "", R, (R > 1) ? "s" : "", Ans, (Ans > 1) ? "s" : "");
}
int main() {
    scanf("%lld", &T);
    while (T--) {
        solve();
    }
    return 0;
}
