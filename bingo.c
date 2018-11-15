#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int bingoAmount;
    int num[99], rand_self, rand_partner, dummy, m, n = 24;
    srand(time(NULL));

    printf("カードの枚数を入力してください\n>>");
    scanf("%d", &bingoAmount);
    for (int j = 0; j < bingoAmount; j++)
    {
        for (int i = 0; i < 99; i++)
        {
            num[i] = i + 1;
        }

        for (int i = 0; i < 10000; i++)
        {
            rand_self = (double)rand() / (RAND_MAX + 1.0) * 99;
            rand_partner = (double)rand() / (RAND_MAX + 1.0) * 99;
            dummy = num[rand_partner];
            num[rand_partner] = num[rand_self];
            num[rand_self] = dummy;
        }

        int bingo[25];
        for (int i = 1; i <= n; i++)
        {
            bingo[i] = num[i];
        }

        for (m = n; m >= 2; m--)
        {
            for (int i = 1; i < m; i++)
            {
                if (bingo[i] > bingo[i + 1])
                {
                    dummy = bingo[i];
                    bingo[i] = bingo[i + 1];
                    bingo[i + 1] = dummy;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (i == 13)
            {
                printf("  0");
            }

            printf("%3d", bingo[i]);

            if (i <= 11)
            {
                if (i % 5 == 0)
                    printf("\n");
            }
            else
            {
                if (i % 5 == 4)
                {
                    printf("\n");
                }
            }
        }
        printf("\n\n");
    }

    return 0;
}