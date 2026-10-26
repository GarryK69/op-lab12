#include <stdio.h>
#include <windows.h>

#define MAX_N 100

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int choice;
    do
    {
        int n;
        do
        {
            printf("Введіть розмір масиву N (1..%d): ", MAX_N);
            scanf_s("%d", &n);
        } while (n < 1 || n > MAX_N);

        int a[MAX_N];
        printf("Введіть %d цілих чисел масиву A:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf_s("%d", &a[i]);
        }

        int b[MAX_N];
        int sizeB = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                b[sizeB] = a[i];
                sizeB++;
            }
        }

        printf("\nРозмір сформованого масиву B: %d\n", sizeB);
        if (sizeB > 0)
        {
            printf("Вміст масиву B (парні числа):\n");
            for (int i = 0; i < sizeB; i++)
            {
                printf("%d ", b[i]);
            }
            printf("\n");
        }
        else
        {
            printf("У вихідному масиві немає парних чисел.\n");
        }

        printf("\n1 - продовжити роботу, 2 - завершити роботу.\nВаш вибір: ");
        scanf_s("%d", &choice);

    } while (choice == 1);

    return 0;
}
