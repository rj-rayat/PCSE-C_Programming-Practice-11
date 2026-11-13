#include <stdio.h>

void maximum (int a[], int n, int k , int i)
{
    int count = 0;
    if(i > n-1)
    {
        return;
    }
    for (int j = 0; j < n; j++)
    {
        
        printf("\n");
    }
    printf("\n");
    maximum(a, n, k, i+1);
}
int main()
{ 
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
     maximum(a, n, k, 0);

   
    
    return 0;
}