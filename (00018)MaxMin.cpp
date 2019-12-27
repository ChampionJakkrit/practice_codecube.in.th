#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, input, mn = 1000005, mx = 0;;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input < mn) {
            mn = input;
        }
        else if (input > mx) {
            mx = input;
        }
    }
    printf("%d\n%d\n", mx, mn);
    return 0;
}