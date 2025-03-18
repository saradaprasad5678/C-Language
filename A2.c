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
