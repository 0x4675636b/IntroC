#include <stdio.h>

#define XTIMES2 x + x

int main()
{
 int a, b, x = 5;
 a = XTIMES2;
 b = XTIMES2 * 3;
 printf("%d %d\n", a,b);


}
