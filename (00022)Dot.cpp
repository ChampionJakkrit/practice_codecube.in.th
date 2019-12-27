#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    scanf("%d", &n);
    int xOld = x, yOld = y, count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        if (x == xOld && y == yOld) {
            count++;
        }

    }
    printf("%d\n", n - count);

    return 0;
}