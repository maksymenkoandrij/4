#include <stdio.h>

int findEqualDivisors(int n) {
    int count = 0;
    for (int m = 1; m < n; m++) {
        if (n % m == n / m) { // Перевірка на рівність частки і залишку
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n (1 < n < 150): ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Некоректне вхідне число. Введіть число від 2 до 149.\n");
    } else {
        int result = findEqualDivisors(n);
        printf("Кількість рівних дільників числа %d: %d\n", n, result);
    }

    return 0;
}
