//1. Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
  int n,x;
  printf("enter the number:");
  scanf("%d",&n);
  x=n%10;
  printf("the unit didgit is %d",x);
}

//2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  printf("the number %d without last digit is %d",n,n/10);
}

//3.Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the values of a and b is");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("the values of a and b after swapping are %d and %d",a,b);
}

//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
int a,b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("values after swapping are %d and %d",a,b);
}

//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
  int n,i,s;
  printf("enter the number:");
  scanf("%d",&n);
  while(n>0)
  {
    s=s+(n%10);
    n=n/10;
  }
  printf("sum of all single digits are %d",s);
}

//Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>
{
  char c;
  int x;
  printf("enter the character:");
  scanf("%c",&c);
  x=ascii(c);
  printf("the ascii value of c is %d",x);
}

//Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
  int n,res,count=0;
  printf("enter the number:");
  scanf("%d",&n);
  while(n>0)
    {
      res=n&1;
      count++;
      if(res==1)
        printf("the position is:%d",count);
      n=n>>1;
    }
}

// Write a program to check whether the given number is even or odd using a bitwise perator
#include<stdio.h>
int main()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  if (n&1)
    printf("even");
  else
    printf("odd");
}

//Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
  int a;
  float b;
  char c;
  double d;
  printf("%d %d %d %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
}

//Write a program to make the last digit of a number stored in a variable as zero.
//	(Example - if x=2345 then make it x=2340)
#include<stdio.h>
int main()
{
  int n,x;
  printf("enter the number:");
  scanf("%d",&n);
  if (n>0)
  {
    x=n%10;
    n=n-x;
    printf("%d",n);
  }
  else
  {
    printf("already zero");
  }
}

/*Write a program to input a number from the user and also input a digit. Append a
	digit in the number and print the resulting number. (Example - number=234 and
	digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
  int num,digit;
  printf("enter the number and digit:");
  scanf("%d %d",&num,&digit);
  if (num>0)
  {
    num=num*10+digit;
    printf("the number is :%d",num);
  }
}

//Assume price of 1 USD is INR 86.59. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
  float i,u;
  printf("enter the indian amount:");
  scanf("%f",&i);
  u=i/86.59;
  printf("the USD of the indian rupee %f is %f",i,u);
}

//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
  int num,rot;
  printf("enter the nnumber:");
  scanf("%d",&num);
  rot=num%10;
  num=num/10;
  rot=rot*100;
  num=num+rot;
  printf("the rotation of one position to right is:%d",num);
}
