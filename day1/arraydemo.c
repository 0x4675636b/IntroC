#include <stdio.h>

int main(void)
{
 int grades[] = { 85, 85, 0, 95, 75, 85, 100, 85, 70, 75 };

 int absents[] = { 1, 1, 9, 2, 0, 3, 4, 1, 0, 3 };

 grades[15] = 2;

 printf("grades[4] = %d\n", grades[4]);
 printf("absents[0] = %d\n", absents[0]);

 printf("absents[3] = %d\n", absents[3]);
 printf("grades[9] = %d\n", grades[9]);
}
