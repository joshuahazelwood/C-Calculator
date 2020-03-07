/*Levi Hazelwood*/

#include<stdio.h>
#include<math.h>



//This function adds two numbers together
float sumfunc (float add1, float add2){
		float sum = add1 + add2;
		return sum;
}
//This function subtracts two numbers from eachother
float difffunc (float sub1, float sub2){
		float difference = sub1 - sub2;
		return difference;x
}
//This function multiplies two numbers by eachother
float prodfunc (float mult1, float mult2){
		float product = mult1 * mult2;
		return product;
}
//This function divides two numbers by eachother
float quotfunc (float qout1, float qout2){
		float quotient = qout1 / qout2;
		return quotient;
}
//This function finds the remainder of two numbers
int divfunc (int divi1, int divi2){
		int divisor = divi1 % divi2;
		return divisor;
}
//This function determines if a number is prime
int primefunc (int pr1){
		int prime;
		float primeif = pr1 % 2;
		float primeif2 = pr1 % 3;
		float primeif3 = pr1 % 5;
		int primeif4 = sqrt(pr1);
		{
		if (primeif == 0 || primeif2 == 0 || primeif3 == 0 || pr1/sqrt(pr1) == primeif4)
		{
			printf("%d is not prime \n", pr1);
		}
		else
		{
			printf("%d is prime \n", pr1);
		}
		}
		return prime;
}
//This function finds the factorial of a given number
int facfunc (int fac1){
		int counter;
		int factorial = 1;
		for (counter = 1; counter <= fac1; counter++)
			factorial = factorial * counter;
		return factorial;
}
//This function finds the number after a given power
int powfunc (int base, int pow1){
		int power = 1;
		while (pow1 > 0)
		{
		power = power * base;
		pow1 = pow1 - 1;

		}
	return power;
}
//This function performs the pathagorean thoerum
float pathfunc (float base1, float height2){
		float hypotenuse = sqrt((base1*base1) + (height2*height2));
		return hypotenuse;
}

int main ()
//This is where the user decides which of the above functions they want to use
{

	printf("Choices: 1.Sum 2.Difference 3.Product 4.Quotient 5.Remainder  \n");
	printf("	 6.Prime Finder 7.Factorial 8.Power 9.Pathagorean Theorum 10.EXIT \n");
	int choice = 0;

	while (choice != 10)
	{

	printf("\n" "Please choose an operation ");
	scanf("%d", &choice);


	if (choice == 1)

	{
		float x;
		float y;
		float sum;

		printf("\n" "Please enter two numbers to add (add a single space between numbers) ");
		scanf("%f" "%f", &x, &y);
		sum = sumfunc(x,y);
		printf("\n" "The sum of %.1f and %.1f is %.3f \n", x, y, sum);


	}
	if (choice == 2)

	{
		float x;
		float y;
		float difference;

		printf("\n" "Please enter two integers to subtract (add a single space between numbers) ");
		scanf("%f", &x);
		scanf("%f", &y);
		difference = difffunc(x,y);
		printf("\n" "The difference of %.1f and %.1f is %.3f \n", x, y, difference);


	}
	if (choice == 3)

	{
		float x;
		float y;
		float product;

		printf("\n" "Please enter two integers to multiply (add a single space between numbers) ");
		scanf("%f", &x);
		scanf("%f", &y);
		product = prodfunc(x,y);
		printf("\n" "The product of %.1f and %.1f is %.3f \n", x, y, product);
	}
	if (choice == 4)

	{
		float x;
		float y;
		float quotient;

		printf("\n" "Please enter two integers to divide (add a single space between numbers) ");
		scanf("%f" "%f", &x, &y);
		quotient = quotfunc(x,y);
		printf("\n" "The quotient of %.1f and %.1f is %.3f \n", x, y, quotient);
	}
	if (choice == 5)

	{
		int x;
		int y;
		int divisor;

		printf("\n" "Please enter two integers to find the remainder of (add a single space between numbers) ");
		scanf("%d" "%d", &x, &y);
		divisor = divfunc(x,y);
		printf("\n" "The remainder of %d and %d is %d \n", x, y, divisor);
	}
	if (choice == 6)

	{
		int x;
		int prime;

		printf("\n" "Please enter an integer to see if it is prime ");
		scanf("%d", &x);
		prime = primefunc(x);
	}
	if (choice == 7)

	{
		int x;
		int factorial;

		printf("\n" "Please enter a number to find the factorial of" "\n");
		printf("(Note: Any integer higher than 31 will cause an overflow resulting in 0 output) ");
		scanf("%d" , &x);
		factorial = facfunc(x);
		printf("\n" "The factorial of %d is %d \n", x, factorial );
	}
	if (choice == 8)

	{
		int x;
		int y;
		int power;

		printf("\n" "Please enter two integers a base and a power of (add a single space between numbers) ");
		scanf("%d %d", &x, &y);
		power = powfunc(x, y);
		printf("\n" "%d to the power of %d is %d \n", x, y, power );
	}
	if (choice == 9)

	{
		float x;
		float y;
		float pathagorize;

		printf("\n" "Please enter a base and height to find the hypotenuse (add a single space between numbers) ");
		scanf("%f %f", &x, &y);
		pathagorize = pathfunc(x, y);
		printf("\n" "The hypotenuse of a triangle with base %.1f and height %.1f is %.3f \n", x, y, pathagorize );
	}
	}
	//Executed when user wants to quit using calculator
	if (choice == 10){
	printf ("\n" "Bye bye");
	system("pause");
	}
	return 0;
}
