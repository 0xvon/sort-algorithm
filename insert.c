#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int m, n, i, dummy, c;
    printf("n = ");
    scanf("%d", &n);
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (m = 1; m < n; m++)
    {
        c = a[m + 1];
        for (i = m; i >= 1; i--)
        {
            if (c >= a[i])
            {
                break;
            }
            else
            {
                a[i + 1] = a[i];
            }
        }
        a[i + 1] = c;
        for (int k = 1; k <= n; k++)
        {
            printf(" %d ", a[k]);
        }
        printf("\n");
    }

    return 0;
}