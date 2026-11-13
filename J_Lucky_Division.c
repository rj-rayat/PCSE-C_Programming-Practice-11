#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int original = n;

    
    
    int flag = 1;
    while(n > 0)
    {
        int last = n % 10;
        if (last != 4 && last != 7 )
        {
            flag = 0;
            break;
        }

        
        n/=10;
    }

    if (flag == 1)
    {
        printf("YES\n");
        
    }
    else
    {
        

        if (
            original % 4 == 0 || original % 7 == 0 || 
            original % 44 == 0 || original % 47 == 0 || original % 74 == 0 || original % 77 == 0 ||
            original % 444 == 0 || original % 447 == 0 || original % 474 == 0 || original % 477 == 0 ||
            original % 744 == 0 || original % 747 == 0 || original % 774 == 0 || original % 777 == 0
            )
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
            
        }
    }
    
    
}