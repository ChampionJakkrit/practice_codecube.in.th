#include <bits/stdc++.h>
using namespace std;

long __lcm(long a, long b) {
    return a*b/__gcd(a, b);
}

int main() {
    int N;
    scanf("%d", &N);
    long* T = new long[N];
    for (int i = 0; i < N; i++) {
        scanf("%ld", &T[i]);
    }
    long lcm = 1;
    for (int i = 0; i < N; i++) {
        lcm = __lcm(lcm, T[i]);
    }
    printf("%ld\n", lcm);
    
    return 0;
}

// lcm(A,B)*gcd(A,B) = A*B


