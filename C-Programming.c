// 1.Program to display hello world
// #include<stdio.h>

//   void main()

// {

// 	printf("Hello World");

// }

// =========================================================================

// 2.Program to do Addition of two no.:
// #include<stdio.h>
// void main()
// {
// 	int a, b, sum;
//  	printf("\n Enter the Value of a and b: ");
//  	scanf("%d%d", &a, &b);

//  	sum = a + b;
//  	printf("\n The Sum of a and b is = %d", sum);
// }
// # =========================================================================

// 3.Program to write arithematic operation:
// #include<stdio.h>
// void main()
// {
// 	int a, b, add, sub, mult, div;
// 	printf("\n Enter the value of a and b: ");
// 	scanf("%d%d", &a,&b);

// add  = a + b;
// sub  = a - b;
// mult = a * b;
// div  = a / b;

// printf("\n The Addition of Given Number is       = %d", add);
// printf("\n The Subtraction of Given Number is    = %d", sub);
// printf("\n The Multiplication of Given Number is = %d", mult);
// printf("\n The Division of Given Number is       = %d", div);

// }

// =========================================================================

// 4.Program on Simple Interest:
// #include<stdio.h>
// void main()
// {
//  int p, t, r, si;
// 	printf("\n Enter the value of p, t, r: ");
// 	scanf("%d%d%d", &p,&t,&r);

// 	si = (p*t*r)/100;
// 	printf("\n The SI is = %d", si);

// }

// =========================================================================

// 5.Program to calculate area of circumference:
// #include<stdio.h>
// void main()
// {
// 	float area, r, cir;
// 	printf("\n Enter the value of radius:");
// 	scanf("%f", &r);

// 	area = 3.142 * r * r;
// 	cir =  2 * 3.142 * r;

// 	printf("\n Area is = %f", area);
// 	printf("\n Area is = %f", cir);	

// }
// =========================================================================

// 6.Program to calculate area of traingle:
// #include<stdio.h>
// void main()
// {
// 	float b, h, area;
// 	printf("\n Enter the value of b and h:");
// 	scanf("%f%f", &b,&h);

// 	area = b * h * 0.5;
// 	printf("\n Area is =%f", area);

// }

// =========================================================================

// 7.Program to calculate sum and average of three number:
// #include<stdio.h>
// void main()
// {
// 	int a, b, c, sum;
// 	float avg;

// 	printf("\n Enter the value of a, b and c:");
// 	scanf("%d%d%d", &a,&b,&c);

// 	sum = a + b + c;
// 	avg = (sum/3);

// 	printf("\n The sum of Given Number is =%d", sum);
// 	printf("\n The Average of Given Number is =%f", avg);

// }

// =========================================================================

// 8.Program to convert distance form km to metre:
// #include<stdio.h>
// void main()
// {
// 	int m ,km;
// 	printf("\n Enter the value of Kilometre: ");
// 	scanf("%d", &km);

// 	m = km * 1000;
// 	printf("\n Kilometre in Metre is = %d", m);

// }

// =========================================================================

// 9.Program to calculate amt, discount, netamt of product:
// #include<stdio.h>
// void main()
// {
// 	int pno, qty, rate, amt;
// 	float disc, netamt;

// 	printf("\n Enter the product no, quantity and rate:");
// 	scanf("%d%d%d", &pno, &rate, &qty);

// 	amt = rate * qty;
// 	disc = amt * 10/100;
// 	netamt = amt - disc;

// 	printf("\n Amount is = %d", amt);
// 	printf("\n Discount is = %f", disc);
// 	printf("\n Net Amount is = %f", netamt);

// }

// =========================================================================

// 10.Program to read employee number and experince and calculate  bonus as 5000 if experience is more than 10 year other wise 2000
// #include<stdio.h>
// void main()
// {
// 	int bonus, employeeno, experience;
// 	printf("\n Enter the Employee No, Experience:");
// 	scanf("%d%d", &experience, &employeeno);

// 	bonus = (experience>=10) ? 5000:2000;
// 	printf("\n Bonus is = %d", bonus);

// }

// =========================================================================

// 11.Program to find large number from input:
// #include<stdio.h>
// void main()
// {
// 	int a, b, large;
// 	printf("\n Enter the value of and b:");
// 	scanf("%d%d", &a, &b);

// 	large = (a>b) ? a : b;
// 	printf("\n %d is large ", large);

// }

// =========================================================================

// 12.Program to calculate even or odd
// #include<stdio.h>
// void main()
// {
// 	int n;
// 	printf("\n Enter the value of n:");
// 	scanf("%d", &n);

// 	(n%2==0):
// 	printf("\n Even");
// 	printf("\n Odd");

// }

// =========================================================================

// 13.Program on Swapping:
// #include <stdio.h>

// int main()
// {
// 	int x, y;
// 	printf("Enter Value of x ");
// 	scanf("%d", &x);
// 	printf("\nEnter Value of y ");
// 	scanf("%d", &y);

// 	int temp = x;
// 	x = y;
// 	y = temp;

// 	printf("\nAfter Swapping: x = %d, y = %d", x, y);
// 	return 0;
// }

// =========================================================================

// 14.Program to find greatest of two number
// #include<stdio.h>
// int main()
// {
// 	int a, b;
//   printf("Enter the value of a and b: ");
// 	scanf("%d%d", &a, &b);

// 		if(a>b)
// 		{
// 			printf("A is Greater Than B");
// 		}
// 		else	
// 		{
// 			printf("B is Greater Than A");
// 		}
// 	return 0;
// 	}

// =========================================================================

// 15.Program to check eligible for voting?
// #include<stdio.h>
// int main()
// {
// 	int age;
// 	printf("Enter Your Age Here: ");
// 	scanf("%d", &age);
	
// 	if(age>=18)
// 	{
// 		printf("You Are Eligible For Voting");
// 	}
// 	else
// 	{
// 		printf("Sorry You Are Not Eligible For Voting");
// 	}
// return 0;
// }

//  =========================================================================
