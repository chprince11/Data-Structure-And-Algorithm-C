#include <stdio.h>

typedef struct {
    double pi;
	int radius;
} Circle;

// function prototype
double calc(Circle);

//function definition
double Calc(Circle c1) {
	return c1.pi * (c1.radius * c1.radius);
}

int main(int argc, char const *argv[])
{
	Circle cc1;

	printf("Enter the default value of PI: ");
	scanf("%lf", &cc1.pi);

	printf("Enter the value of radius: ");
	scanf("%d", &cc1.radius);

	printf("The area of Circle is %.2f\n " , Calc(cc1));

	return 0;
}

