#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    int total = 200;
    double x = 100.0;

    int second = total * 3 / 4;
    int first = total - second;
    double revenue = second * x + first * 2 * x;

    printf("Реактивный аэробус летит из Лондона в Нью-Йорк.\n");
    printf("Всего пассажиров: %d\n", total);
    printf("Три четверти пассажиров (%d) имеют билеты второго класса стоимостью %.2f фунтов.\n",
        second, x);
    printf("Остальные (%d) имеют билеты первого класса стоимостью %.2f фунтов.\n",
        first, 2 * x);
    printf("Сумма денег, получаемая авиакомпанией: %.2f фунтов.\n", revenue);

    getchar();
    return 0;
}