#include <stdio.h>
#include <stdlib.h>
// C program to use the above created header file
#include <stdio.h>
// C program to use the above created header file
#include <stdio.h>
#include<conio.h>
#include <math.h>


void Armstrong(int n)
{
   int copy_of_num,sum=0,rem;

   /* Value of variable num would change in the
      below while loop so we are storing it in
      another variable to compare the results
      at the end of program
   */
   copy_of_num = n;

   /* We are adding cubes of every digit
    * and storing the sum in variable sum
    */
   while (n != 0)
   {
      rem = n % 10;
      sum = sum + (rem*rem*rem);
      n = n / 10;
   }

   /* If sum of cubes of every digit is equal to number
    * itself then the number is Armstrong
    */
   if(copy_of_num == sum)
      printf("\n%d is an Armstrong Number",copy_of_num);
   else
      printf("\n%d is not an Armstrong Number",copy_of_num);

}
void Automorphic(int n)
{
    int square = n * n;
    int flag=0;
   while(n>0)
   {
       if(n%10 != square%10)
         {
           flag=-1;
           break;
         }

       n=n/10;
       square=square/10;
   }
   if(flag==0)
    printf("It is an Automorphic Number");
   else
    printf("It is not an Automorphic Number");
}
int binary_decimal(int n)
{
    int  num, binary_val, decimal_val = 0, base = 1, rem;


    binary_val = n;
    while (n > 0)
    {
        rem = n % 10;
        decimal_val = decimal_val + rem * base;
        n = n / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", binary_val);
    printf("Its decimal equivalent is = %d \n", decimal_val);
    return 0;

}


void EvenOdd(int n)
{
  int ans = 0;


    // True if n is perfectly divisible by 2
    if(n % 2 == 0)
    printf("%d is even.", n);
  else
        printf("%d is odd.", n);

}
void fact(int n) {
    int i;
    unsigned long long fact = 1;
    //printf("Enter an integer: ");
    //scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return fact;
}

void Fibonacci(int n)
{
 int t1=0,t2=1,nextterm,i;

 printf("\n%d %d",t1,t2);
 //printing 0 and 1
 for(i=2;i<n;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  nextterm=t1+t2;
  printf(" %d",nextterm);
  t1=t2;
  t2=nextterm;
 }
  return;
 }

int GCD(int n1)
{
    int  n2, i, gcd;

    printf("Enter second number: ");
    scanf(" %d", &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

   printf("G.C.D of %d and %d is %d", n1, n2, gcd);
return 0;
}


int LCM(int n1) {
    int  n2, max,lcm;
    printf("Enter second number: ");
    scanf(" %d", &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return lcm;
}

void multiplicationtable(int n) {
    int i;

    for (i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}

void naturalnumber(int n) {
    int i, sum = 0;

    //printf("Enter a positive integer: ");
    //scanf("%d", &n);
if(n>0){
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
     printf("Sum = %d", sum);
}
else{
    printf("Entered number is negative");

}

    return 0;
}

void palindrome(int n)
{
   int  reverse_num=0, remainder,temp;

   temp=n;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   }

   /* If the original input number (num) is equal to
    * to its reverse (reverse_num) then its palindrome
    * else it is not.
    */
   if(reverse_num==n)
      printf("%d is a palindrome number",n);
   else
      printf("%d is not a palindrome number",n);
}

void power(int base) {
    int exp;
    long long result = 1;
    //printf("Enter a base number: ");
   // scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %lld", result);
    return ;
}


int prime(int num) {
    int i, flag = 0;
    int ans=0;
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }

    if (num == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
            return 0;
    }

    return;
}

void Ugly(int n)
{
int x=0;
  printf("\n\n Check whether a given number is an ugly number:\n");
  printf("----------------------------------------------------\n");
      if (n <= 0) {
            printf("Input a correct number.");
        }
       while (n != 1)
       {
            if (n % 5 == 0)
            {
                n /= 5;
            }
            else if (n % 3 == 0)
            {
                n /= 3;
            }
            else if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                printf("It is not an ugly number.\n");
                x = 1;
                break;
            }
        }
		        if (x==0)
		        {
                printf("It is an ugly number.\n");
                }
}



int main()
{
    int choice, n, h;

printf("Welcome to Our Smart Calculator! \n");
printf(" 1.Factorial of a number \n 2.Sum of natural number \n 3.Power of a number \n 4.Identifying Even or Odd \n 5.Multiplication table of a particular number from 1 to 10. \n 6.Fibonacci series \n 7.To identify the number is Prime or not. \n 8.LCM of 2 numbers \n 9.GCD of 2 numbers \n 10.To check whether a number is Armstrong or not \n 11.To check whether a number is Ugly Number or not");
printf("\n 12.To check whether a number is Automorphic number or not \n 13.To check whether a number is Palindrome or not\n 14.To check whether a number is Decimal or not \n 15.Exit");



    /*printf("\n Enter your choice ");
    scanf("%d", &choice);

   printf("Enter a number(having boundary value range [0 1000]): ");
scanf("%d", &n);*/

do
{
    printf("\n Enter your choice ");
    scanf("%d", &choice);
    printf("Enter a number(having boundary value range [0 1000]): ");
    scanf("%d", &n);
    switch (choice)
    {
    case 1:
        fact(n);
        break;

    case 2:
        naturalnumber(n);
        break;

    case 3:
        power(n);
        break;

    case 4:
        EvenOdd(n);
        break;

    case 5:
        multiplicationtable(n);
        break;

    case 6:
        Fibonacci(n);
        break;

    case 7:
        prime(n);
        break;

    case 8:
        LCM(n);
        break;

    case 9 :
        GCD(n);
        break;

    case 10 :
        Armstrong(n);
        break;

    case 11 :
        Ugly(n);
        break;

    case 12:
        Automorphic(n);
        break;

    case 13:
        palindrome(n);
        break;

    case 14:
        binary_decimal(n);
        break;
    case 15:
        break;

    default:
    printf("Error! The operator is not correct");
        break;
    }

    printf("\ndo u want to continue again? press 1 for terminate or press any other key for continue");

    scanf("%d", &h);

    /*printf("\n Enter your choice ");
    scanf("%d", &choice);
    printf("Enter a number(having boundary value range [0 1000]): ");
    scanf("%d", &n);*/
}while(h!=1);

   printf("\nThank You");
   //printf("do u want to continue again? press 1 for yes press any other key for terminate");
   //scanf("%d", &h);
    return 0;
}
