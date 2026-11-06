#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "RUS");

    int day;

    printf("Введите порядковый номер дня недели (1-7): ");
    if (scanf("%d", &day) != 1)
    {
        printf("Ошибка: некорректный ввод.\n");
        return 1;
    }

    switch (day)
    {
    case 1:
        printf("Понедельник. До воскресенья осталось 6 дней.\n");
        break;
    case 2:
        printf("Вторник. До воскресенья осталось 5 дней.\n");
        break;
    case 3:
        printf("Среда. До воскресенья осталось 4 дня.\n");
        break;
    case 4:
        printf("Четверг. До воскресенья осталось 3 дня.\n");
        break;
    case 5:
        printf("Пятница. До воскресенья осталось 2 дня.\n");
        break;
    case 6:
        printf("Суббота. До воскресенья остался 1 день.\n");
        break;
    case 7:
        printf("Воскресенье. Сегодня воскресенье (0 дней).\n");
        break;
    default:
        printf("Ошибка: некорректный номер дня недели (ожидается число от 1 до 7).\n");
        return 1;
    }

    return 0;
}
