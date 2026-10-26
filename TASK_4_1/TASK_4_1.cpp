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
            printf("Введіть розмір масиву L (1..%d, за умовою 11): ", MAX_N);
            scanf_s("%d", &n);
        } while (n < 1 || n > MAX_N);

        int L[MAX_N];
        printf("Введіть %d елементів масиву L:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf_s("%d", &L[i]);
        }

        printf("\nВихідний масив L:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", L[i]);
        }
        printf("\n");

        int res[MAX_N];
        int k = 0;
        int countPos = 0;
        int countNeg = 0;

        for (int i = 0; i < n; i++)
        {
            if (L[i] > 0)
            {
                res[k] = L[i];
                k++;
                countPos++;
            }
            else if (L[i] < 0)
            {
                countNeg++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (L[i] <= 0)
            {
                res[k] = L[i];
                k++;
            }
        }

        printf("\nСформований масив:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", res[i]);
        }
        printf("\n");

        printf("Кількість додатних елементів: %d\n", countPos);
        printf("Кількість від'ємних елементів: %d\n", countNeg);

        printf("\n1 - продовжити роботу, 2 - завершити роботу.\nВаш вибір: ");
        scanf_s("%d", &choice);

    } while (choice == 1);

    return 0;
}
