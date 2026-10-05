#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    int N = 16;
    int K = 54;
    int A = 60;

    printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", N * A + K);
    printf("До полуночи осталось %d часов и %d минут\n", 23 - N, A - K);
    printf("С 8.00 прошло %d секунд\n", (N - 8) * A * A + K * A);
    printf("Текущий час = %.2f суток и текущая минута = %.2f часа\n",
        N / 24.0, K / 60.0);

    getchar();
    return 0;
}
