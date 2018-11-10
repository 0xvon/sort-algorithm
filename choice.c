#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int i, j, m = 1, n, dummy;
    printf("n= ");
    scanf("%d", &n);
    int a[n + 1];
    for (int k = 1; k <= n; k++)
    {
        printf("a[%d] = ", k);
        scanf("%d", &a[k]);
    }

    for (m = 1; m < n; m++)
    {
        i = m;
        for (j = m + 1; j <= n; j++)
        {
            if (a[j] < a[i])
            {
                i = j;
            }
        }

        dummy = a[m];
        a[m] = a[i];
        a[i] = dummy;
    }

    for (int k = 1; k <= n; k++)
    {
        printf("a[%d] = %d\n", k, a[k]);
    }

    return 0;
}