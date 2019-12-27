#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+j == n/2 || i-j == n/2 || j-i == n/2 || i+j == n-1 + n/2) {
                printf("*");
            }
        else {
            printf("_");
        }
    }
    printf("\n");
}

return 0;
}