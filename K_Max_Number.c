#include <stdio.h>

int max(int a[], int n, int i, int m)
{
    if (i == n)
    {
        return m;
    }
    if (a[i] > m)
    {
        m = a[i];
    }
    max(a, n, i + 1, m);
}
int main()
{ 
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_number= a[0];
    int result = max(a, n, 0, max_number);
    printf("%d", result);
    return 0;
}