#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    int year;
    puts("Введите год:");
    scanf("%d", &year);
    getchar();

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Год %d високосный\n", year);
    else
        printf("Год %d не високосный\n", year);

    getchar();
    return 0;
}