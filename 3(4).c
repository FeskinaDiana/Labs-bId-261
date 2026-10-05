#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    double k = 8.2;
    double x = 5.0;

    double b = sqrt(fabs(x));
    double a = pow(b, 4) + pow(k, 3);
    double y = pow(log(a), 3) + exp(-x);

    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("A = %d, B = %d, C = %d\n", A, B, C);

    int cond1 = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
    printf("Только одно из A и B четное: %d\n", cond1);

    int cond2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Каждое из A, B, C кратно трем: %d\n", cond2);

    getchar();
    return 0;
}