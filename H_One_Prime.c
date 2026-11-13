#include <stdio.h>
int main()
{ 
    int n;
    scanf("%d", &n);

    if (n <=  1)
    {
        printf("NO\n");
    }
    else if(n == 2)
    {
        printf("YES\n");
    }
    else
    {
        int is_prime = 1;
        for (int i = 2; i < n; i++)
        {
           if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
            
        }

        if (is_prime == 1)
        {
            printf("YES\n");
        }
        else if(is_prime == 0)
        {
            printf("NO\n");
        }
    }
    
  
  return 0;
}