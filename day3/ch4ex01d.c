#include <stdio.h>

#define PRINT(X,Y) printf("%d %d \n", X, (X*Y))

int main()
{
int a = 5, b = 6;

PRINT(a,b);
PRINT(b, a + b);

}
