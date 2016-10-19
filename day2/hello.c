#include <stdio.h>

int main(void)
{
 
 char greeting[13] = "Hello, World"; /* Null byte fo free */

 char tedium [] = { 'H', 'i', ' ', 't', 'h', 'e', 'r', 'e'};
 
 printf("%s\n", greeting);

 printf("%s\n", tedium);

 int grades [] = {85, 95, 43, 77 };  
 printf("tedium: %zd\n", sizeof(tedium));
 printf("greet: %zd\n", sizeof(greeting));
 printf("grades: %zd\n", sizeof(grades));
}
