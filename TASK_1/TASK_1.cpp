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

        int arr[MAX_N];
        printf("Введіть %d елементів масиву:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf_s("%d", &arr[i]);
        }

        int hasLocalMin = 0;
        int maxLocalMin = 0;

        for (int i = 0; i < n; i++)
        {
            int isMin = 1;
            if (i > 0 && arr[i] >= arr[i - 1])
            {
                isMin = 0;
            }
            if (i < n - 1 && arr[i] >= arr[i + 1])
            {
                isMin = 0;
            }

            if (isMin)
            {
                if (!hasLocalMin || arr[i] > maxLocalMin)
                {
                    maxLocalMin = arr[i];
                }
                hasLocalMin = 1;
            }
        }

        if (hasLocalMin)
        {
            printf("Максимальний з локальних мінімумів: %d\n", maxLocalMin);
        }
        else
        {
            printf("Локальних мінімумів не знайдено.\n");
        }

        printf("\n1 - продовжити роботу, 2 - завершити роботу.\nВаш вибір: ");
        scanf_s("%d", &choice);

    } while (choice == 1);

    return 0;
}
