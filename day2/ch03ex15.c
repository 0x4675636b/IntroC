#include <stdio.h>
#include <math.h>

double bmi(double pounds, double inches);

double bmi(double pounds, double inches)
{
	double kg = 2.20462;
	double meters = 0.0254;
	double height = inches * meters; 
	double weight = pounds / kg;
	double bmi_total = weight / (pow(height, 2 ));

	if(bmi_total < 18.5){
		printf("BMI is: %f\n Underweight \n", bmi_total);
	} else if(bmi_total > 18.5 && bmi_total < 24.9) {
		printf("BMI is: %f\n Normal weight \n", bmi_total);
	} else if(bmi_total > 25 && bmi_total < 29.9){
		printf("BMI is: %f\n Overweight \n", bmi_total);
	} else {
		printf("BMI is: %f\n Obese \n", bmi_total);
	}
	
	  

}
int main(void) 
{
	double a = bmi(146, 70), b = bmi(108, 65), c = bmi(57,14);
	printf("%f", a);
	printf("%f", b);
	printf("%f", c);

}
