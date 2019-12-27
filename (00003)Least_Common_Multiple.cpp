#include <bits/stdc++.h>
using namespace std;

int main() {
   long A, B;
   scanf("%ld%ld", &A, &B);
   printf("%ld\n", (A*B)/__gcd(A, B));
   
    return 0;
}