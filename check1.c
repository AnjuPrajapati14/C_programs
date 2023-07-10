#include <stdio.h>
#include <stdlib.h>

void printConcentricPattern(int n) {
    int dim = 2 * n - 1;
    int center = dim / 2;

    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            int distance = abs(i - center) > abs(j - center) ? abs(i - center) : abs(j - center);
            printf("%d ", 1 + distance);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printConcentricPattern(n);
    return 0;
}
