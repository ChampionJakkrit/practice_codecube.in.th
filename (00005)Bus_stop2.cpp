#include <bits/stdc++.h>
using namespace std;

long __lcm(long a, long b) {
    return a*b/__gcd(a, b);
}

int main() {
    int N;
    scanf("%d", &N);
    long lcm = 1, T;
    for (int i = 0; i < N; i++) {
        scanf("%ld", &T);
        lcm = __lcm(lcm, T);
    }
    printf("%ld\n", lcm);
    
    return 0;
}

// lcm(A,B)*gcd(A,B) = A*B


