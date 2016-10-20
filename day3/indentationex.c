#include <stdio.h>

int main(void)
{


}

int gnu(int value)
    {
	value *= 35;
	if (value > 500)
	   {
		value -= 500;
	   }
	return value;
	
    }

int allman(int value)
{
	value *=35;
	if (value > 500)
	{
		value -= 500;
	}
	return value;

}

int one_true_braces_tyle(int value)
{
	value *= 35;
	if (value > 500){
	   	value -= 500;
	} else {
		value += 10;
	}
	return value;
}
int bsd(int value) {
	
	



}
