#include <stdio.h>
#include <stdlib.h>
// C program to use the above created header file
#include <stdio.h>

#include "unity.h"
#include"Armstrong.h"
extern int binary_decimal(int n);

//void setUp (void) {} /* Is run before every test, put unit init calls here. */
//void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */

int main2()
{
    int choice, n;

printf("Welcome to Our Smart Calculator! \n");
printf(" 1.Factorial of a number \n 2.Sum of natural number \n 3.Power of a number \n 4.Identifying Even or Odd \n 5.Multiplication table of a particular number from 1 to 10. \n 6.Fibonacci series \n 7.To identify the number is Prime or not. \n 8.LCM of 2 numbers \n 9.GCD of 2 numbers \n 10.To check whether a number is Armstrong or not \n 11.To check whether a number is Ugly Number or not");
printf("\n 12.To check whether a number is Automorphic number or not \n 13.To check whether a number is Palindrome or not\n 14.To check whether a number is Decimal or not \n 15.Exit");



    printf("\n Enter your choice ");
    scanf("%d", &choice);

   printf("Enter 1 number(having boundary value range [0 1000]): ");
    scanf("%d",&n);


switch (choice)
{

case 1 :
    binary_decimal(n);

    break;

default:
printf("Error! The operator is not correct");
    break;
}
   printf("\nThank You");

    return 0;
}
