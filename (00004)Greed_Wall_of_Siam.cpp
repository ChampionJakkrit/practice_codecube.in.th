#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    long* H = new long[N];
    for (int i = 0; i < N; i++) {
        scanf("%ld", &H[i]);
    }
    long gcd = H[0], result = 0;
    for (int i = 1; i < N; i++) {
        gcd = __gcd(gcd, H[i]);
    }
    for (int i = 0; i < N; i++) {
        result += H[i] / gcd;
    }
    printf("%ld\n", result);

    return 0;
}