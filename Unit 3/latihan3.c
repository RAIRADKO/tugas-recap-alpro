#include <stdio.h>

int main() {
    int n, total = 0;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("%d\n", total);

    return 0;
}
