#include <stdio.h>

int main()
{
  int i = 0;
  int sum = 0;

while (i < 100){
 if(i  % 5 == 0) {
	sum = sum + i;
  }

  i = i + 1;
}
  printf("The sum is : %d, ", sum);


}
