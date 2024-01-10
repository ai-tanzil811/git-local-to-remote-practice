
#include<stdio.h>
int factorial(int a)
{
	
 if(a>=1)
  {
	return  a*factorial(a-1);
}
else return 1;

}
int main()
{

	int input;
	scanf("%d",&input);
	printf("The factorial of %d is %d : ",input,factorial(input));
	return 0;

}
