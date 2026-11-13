#include <stdio.h>
int main()
{ 
  
    int x, p;
    scanf("%d %d", &x, &p);

   
    float discounted_price = p * 100;
    float percentig = 100 - x;

    float price = discounted_price / percentig;

    printf("%.2f\n", price);
   
    return 0;
}