#include <stdio.h>

int add(int x, int y);


int main(void)
{

 int b = 3, c = 5;
 int a = add(b,c);
 printf("%d\n", a);

}
int add(int x, int y)
{

  return x +y;

}

