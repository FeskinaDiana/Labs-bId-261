#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251 > nul");

    printf("123\n");
    printf("1\n2\n3\n");
    printf("1\n\t2\n\t\t3\n");
    printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
    printf("%10.3f\n", 12.234657);
    printf("%10.5f\n", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("7 / 5 = %f\n", 7.0 / 5);
    printf("2000 * 4 = %d\n", 2000 * 4);
    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
    printf("%g разделить %g равно %g\n", 5., 2000000., 5. / 2000000);
    printf("%e разделить %e равно %e\n", 5., 2000000., 5. / 2000000);
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);

    getchar();
    return 0;
