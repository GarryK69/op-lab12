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

        printf("\nВихідний масив:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        if (n > 1)
        {
            int last = arr[n - 1];
            for (int i = n - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = last;
        } 

        printf("Масив після циклічного зсуву вправо на 1 позицію:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("\n1 - продовжити роботу, 2 - завершити роботу.\nВаш вибір: ");
        scanf_s("%d", &choice);

    } while (choice == 1);

    return 0;
}
