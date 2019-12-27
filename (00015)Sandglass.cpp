#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 1) {
        for (int i = n/2+1; i >= 1; i--) {
            for (int s = 0; s < n-i-(n/2); s++) {
                printf("  ");
            }
            for(int j = i; j <= 2*i-1; j++) {
                printf("* ");
            }
            for(int j = 0; j < i-1; j++) {
                printf("* ");
            }
            printf("\n");
        }
        for (int i = 2; i <= n/2+1; i++) {
            for (int s = 1; s <= n-i-(n/2); s++ ) {
                printf("  ");
            }
            int j = 0;
            while(j != 2*i-1) {
                printf("* ");
                j++;
            }
            printf("\n");
        }
    }
    else 
        printf("error\n");

    return 0;
}