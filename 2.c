#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");
    setlocale(LC_NUMERIC, "C");

    float x;
    float y;
    char c;

    printf("Введите выражение (например, 2.5+3.5): ");
    if (scanf("%f %c %f", &x, &c, &y) != 3)
    {
        printf("Ошибка: некорректный формат выражения.\n");
        return 1;
    }

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        if (y == 0.0f)
        {
            printf("Ошибка: деление на ноль!\n");
            return 1;
        }
        printf("=%f\n", x / y);
        break;
    case '^':
        printf("=%f\n", powf(x, y));
        break;
    default:
        printf("Ошибка: неизвестная операция '%c'\n", c);
        return 1;
    }

    return 0;
}
