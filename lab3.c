#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define D 2.54
#define D_ESP 2.32166
#define D_LIT 2.7076

void task1() {
    int num1, num2;
    puts("Задание 1. Ввод данных с клавиатуры");
    puts("Введите первое целое число:");
    scanf("%d", &num1);
    getchar();
    printf("Введено число %d\n", num1);

    puts("Введите второе целое число:");
    scanf("%d", &num2);
    getchar();
    printf("Введено число %d\n", num2);

    printf("Сумма: %d\n", num1 + num2);
    printf("Разность: %d\n", num1 - num2);
    printf("Произведение: %d\n", num1 * num2);
    printf("Частное: %.2f\n", (float)num2 / num1);
    printf("Остаток от деления второго на первое: %d\n", num2 % num1);
    system("pause");
}

void task2() {
    int dym;
    float result_eng, result_esp, result_lit;

    puts("Задание 2. Пересчёт дюймов в сантиметры");
    puts("Введите количество дюймов:");
    scanf("%d", &dym);
    getchar();

    result_eng = D * dym;
    result_esp = D_ESP * dym;
    result_lit = D_LIT * dym;

    printf("%d английских дюймов — это %.2f см\n", dym, result_eng);
    printf("%d испанских дюймов — это %.2f см\n", dym, result_esp);
    printf("%d старолитовских дюймов — это %.2f см\n", dym, result_lit);
    system("pause");
}

void task3() {
    float a, b;
    char col1[30], col2[30], col3[30];

    puts("Задание 3*. Таблица с рамкой");
    puts("Введите число a:");
    scanf("%f", &a);
    getchar();
    puts("Введите число b:");
    scanf("%f", &b);
    getchar();

    sprintf(col1, "%.0f * %.0f", a, b);
    sprintf(col2, "%.0f+%.0f", a, b);
    sprintf(col3, "%.0f-%.0f", a, b);

    printf("___________________________\n");
    printf("| %-9s | %-9s | %-9s |\n", "a * b", "a+b", "a-b");
    printf("---------------------------\n");
    printf("| %-9s | %-9s | %-9s |\n", col1, col2, col3);
    printf("---------------------------\n");
    printf("| %-9.2f | %-9.2f | %-9.2f |\n", a * b, a + b, a - b);
    printf("---------------------------\n");
    system("pause");
}

void task_home() {
    float r1, r2, r_posl, r_par;

    puts("Домашнее задание. Вариант 6. Сопротивление резисторов");
    puts("Введите сопротивление первого резистора (Ом):");
    scanf("%f", &r1);
    getchar();
    puts("Введите сопротивление второго резистора (Ом):");
    scanf("%f", &r2);
    getchar();

    r_posl = r1 + r2;
    r_par = (r1 * r2) / (r1 + r2);

    printf("Последовательное соединение: %.2f Ом\n", r_posl);
    printf("Параллельное соединение: %.2f Ом\n", r_par);
    system("pause");
}

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    int choice;
    do {
        system("cls");
        puts("Лабораторная работа №3");
        puts("1 — Задание 1 (ввод чисел)");
        puts("2 — Задание 2 (дюймы в см)");
        puts("3 — Задание 3* (таблица)");
        puts("4 — Домашнее задание (резисторы)");
        puts("0 — Выход");
        puts("Выберите пункт меню:");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task_home(); break;
        case 0: puts("Выход..."); break;
        default: puts("Неверный пункт."); system("pause");
        }
    } while (choice != 0);

    return 0;
}