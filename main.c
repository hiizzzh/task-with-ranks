#include <stdio.h>


int nsd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return nsd(b, a % b);
}


int nsk(int a, int b) {
    return (a * b) / nsd(a, b);
}

int main() {
    int n;
    scanf("%d", &n);

    int numbers[20];


    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];


    for (int i = 1; i < n; i++) {
        result = nsk(result, numbers[i]);
    }

    printf("%d\n", result);

    return 0;
}
