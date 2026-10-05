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

    printf("b = %.4f\n", b);
    printf("a = %.4f\n", a);
    printf("y = %.4f\n", y);
    printf("Контрольный пример: y = 256.87\n");

    getchar();
    return 0;
}