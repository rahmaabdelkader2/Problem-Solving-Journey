#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function.
void calculate_the_maximum(int n, int k) {
    int and_res = 0;
    int or_res = 0;
    int xor_res = 0;
    int and_max = 0;
    int or_max = 0;
    int xor_max = 0;

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) { 
            and_res = i & j;
            or_res = i | j;
            xor_res = i ^ j;

            if (and_res < k && and_res > and_max) {
                and_max = and_res;
            }
            if (or_res < k && or_res > or_max) {
                or_max = or_res;
            }
            if (xor_res < k && xor_res > xor_max) {
                xor_max = xor_res;
            }
        }
    }

    printf("%d\n", and_max);
    printf("%d\n", or_max);
    printf("%d\n", xor_max);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
