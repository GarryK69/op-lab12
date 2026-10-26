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
            printf("Введіть розмір масиву F (1..%d, за умовою 14): ", MAX_N);
            scanf_s("%d", &n);
        } while (n < 1 || n > MAX_N);

        int F[MAX_N];
        printf("Введіть %d елементів масиву F:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf_s("%d", &F[i]);
        }

        printf("\nВхідний масив F:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", F[i]);
        }
        printf("\n");

        int res[MAX_N];
        int k = 0;
        int first = F[0];

        for (int i = 1; i < n; i++)
        {
            if (F[i] > first)
            {
                res[k] = F[i];
                k++;
            }
        }

        res[k] = first;
        k++;

        for (int i = 1; i < n; i++)
        {
            if (F[i] <= first)
            {
                res[k] = F[i];
                k++;
            }
        }

        printf("\nВихідний масив:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");

        printf("\n1 - продовжити роботу, 2 - завершити роботу.\nВаш вибір: ");
        scanf_s("%d", &choice);

    } while (choice == 1);

    return 0;
}
