#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    long H, gcd, result = 0;
    for (int i = 0; i < N; i++) {
        scanf("%ld", &H);
        if (i == 0) gcd = H;
        else gcd = __gcd(gcd, H);
        result += H;
    }
    result /= gcd;
    printf("%ld\n", result);

    return 0;
}