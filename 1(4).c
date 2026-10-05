#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    double gr;
    puts("¬ведите угол в градусах:");
    scanf("%lf", &gr);
    getchar();

    double rad = gr * M_PI / 180.0;
    printf("sin(%.1f град) = %.6f\n", gr, sin(rad));

    getchar();
    return 0;
}