#include <stdio.h>
int main()
{ 
    int w;
    scanf("%d", &w);

    int divide = w / 2;

    
    

    
    if(w % 2 != 0)
    {
        printf("NO\n");
    }
    else if (divide < 2)
    {
        printf("NO\n");
    }
    else if (divide % 2 == 1)
    {
        divide = divide + 1;

        int cut = w-divide;
        int total = cut + divide;

        if (total = w)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("YES\n");
    }
   
    return 0;
}