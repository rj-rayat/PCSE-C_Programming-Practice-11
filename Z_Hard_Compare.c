#include <stdio.h>
#include <math.h>

int main()
{ 
  long long int a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
 
  long double A = b * logl(a);
  long double B = d * logl(c);


  if (A < B)
  {
    printf("NO\n");
  }
  else if (A == B)
  {
    printf("NO\n");
  }
  else
  {
    printf("YES\n");
  }
  return 0;
}