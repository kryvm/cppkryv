#include <iostream>
#include <cmath>

int main()
{
  double a,b,c,s,p;
  scanf("%lf %lf %lf",&a,&b,&c);
  p = (a+b+c)/2;
  s = sqrt(p*(p-a)*(p-b)*(p-c));
  printf("s = %lf",s);
}
