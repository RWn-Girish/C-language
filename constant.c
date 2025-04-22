#include<stdio.h>
#define PI 3.14

	// find out circle area
	//	area = PI * r * r

int main()
{
	int r;
	float area;
	
	printf("Enter R: ");
	scanf("%d", &r); 
	
	area = PI * r * r;
	
	printf("Area of Circle is: %f", area);
}