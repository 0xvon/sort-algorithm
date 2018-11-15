#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int m, n, i, dummy;
    printf("n = ");
    scanf("%d", &n);
    int a[n + 1];
    for (i = 1; i <= n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (m = n; m >= 2; m--)
    {
        for (i = 1; i < m; i++)
        {
            if (a[i] < a[i + 1])
            {
                dummy = a[i];
                a[i] = a[i + 1];
                a[i + 1] = dummy;
            }
        }
    }
    for (int k = 1; k <= n; k++)
    {
        printf("%3d", a[k]);
    }

    return 0;
}