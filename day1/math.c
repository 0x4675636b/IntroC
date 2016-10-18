#include <stdio.h>

int main(void)
{
    int able = 2, baker = 3, charlie = 5;
    printf("%d\n", able); 
    printf("%d\n", baker);
    printf("%d\n", charlie);

    printf("a + b = %d\n", able + baker);

    charlie += 2; //charlie = charlie + 2;
 
    printf("a + b = %d\n", able /  baker);

    printf("c %% b = %d\n", charlie  %  baker);
    printf("a %% b = %d\n", able %  baker);

    float  xray = 3.1, yankee = 0.0000041, zulu = 590000;

    printf("%.10f\n", xray); 
    printf("%.10f\n", yankee); 
    printf("%.10f\n", zulu);
    
    printf("%.10f\n", yankee + zulu);
    printf("%.10f\n", xray + zulu);
 
}
