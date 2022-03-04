#include <stdio.h>

int main()
{
    int i = 1, j;
    int angka;
    int limit;
    int counter;
    int prima = 0;

    printf("Masukkan angka: ");scanf("%d", &angka);

    for(counter = 1; counter <= angka; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }

        if (i == j)
        {
            printf("Bilangan Prima ke-%d = %d\n", counter, i);
            counter++;
        }
    }
}
