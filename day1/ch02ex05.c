#include <stdio.h>

int is_right(int side1, int side2, int hypotenuse)
{
   int  square_sides = ((side1 * side1) + (side2 * side2));
   if (square_sides == hypotenuse){
      return 1;
}

}

int main(void)
{
   int side1 = 3, side2 = 4, side3 = 5;
   printf("%d, %d, and %d are ",  side1, side2, side3);
   
   if(is_right(side1, side2, side3 == 0)){
    printf("NOT ");
}
   if(is_right(side1, side2, side3 == 1)){
   printf(" are the sides of a right triangle \n");
}

}
