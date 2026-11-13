#include <stdio.h>

long long int count_log(long long int n, long long int count, int i)
{
    if (n == 1)
    {
        return count;
    }

   
    
    count++;
    

    return count_log(n/2, count, i + 1 );
}
int main()
{ 
     long long int n;
    scanf("%lld", &n);
    long long int count = 0;
    long long int result = count_log(n, count, 0);
    printf("%lld\n", result);
    return 0;
}