/*1. Write a program to check whether a given number is positive or non-positive.
ans)*/
	#include<stdio.h>
	int main()
	{
	    int num;
	    printf("Enter the number:");
	    scanf("%d",&num);
	    if(num>0)
	        printf("Number is positive");
	    else
	        printf("Number is non-positive");
	    return 0;
	}

/*2. Write a program to check whether a given number is divisible by 5 or not
ans)*/
	#include<stdio.h>
	int main()
	{
	    int n;
	    printf("Enter a number:");
	    scanf("%d",&n);
	    if((n%10)==0 || (n%10)==5)
	        printf("Number is divisible by 5");
	    else
	        printf("Number is not divisible by 5");
	    return 0;
	}

/*3. Write a program to check whether a given number is an even number or an odd
number.
ans)*/
	#include<stdio.h>
	int main()
	{
	    int n;
	    printf("Enter a number:");
	    scanf("%d",&n);
	    if(n%2==0)
	        printf("Even");
	    else
	        printf("Odd");
	    return 0;
	}

/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.
ans)*/
	#include<stdio.h>
	int main()
	{
	    int n;
	    printf("Enter the number:");
	    scanf("%d",&n);
	    if(n/2*2==n)
	        printf("Even");
	    else
	        printf("Odd");
	    return 0;
	}

/*5. Write a program to check whether a given number is a three-digit number or not.
ans)*/
	#include<stdio.h>
	int main()
	{
	    int n;
	    printf("Enter a number:");
	    scanf("%d",&n);
	    if(n>99 && n<1000)
	        printf("%d is a three-digit number.",n);
	    else
	        printf("%d is not a three-digit number.",n);
	    return 0;
	}

/*6. Write a program to print greater between two numbers. Print one number of both are
the same.
ans)*/
	#include<stdio.h>
	int main()
	{
	    int a,b;
	    printf("Enter two numbers:\n");
	    scanf("%d%d",&a,&b);
	    a>b?printf("%d is greater",a):printf("%d is greater",b);
	    return 0;
	}

//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
int main() {
    int a,b,c,D;
    printf("enter the values:");
    scanf("%d%d%d",&a,&b,&c,&D);
    D=b*b-4*a*c;
    if(D>0)
        printf("real & distinct roots");
    else if(D==0)
        printf("real and equal roots");
    else
        printf("imaginary roots");
    return 0;
}

//8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main() {
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("Leap year");
    }
    else
        printf("not Leap");
    return 0;
}

//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    printf("enter a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d is the greatest",a>b?a>c?a:c:b>c?b:c);
    return 0;
}

//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main() {
    float cp,sp,p,l,per;
    printf("enter cp and sp");
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
        p=sp-cp;
        per=(p/cp)*100;
        printf("profit percent is %f",per);
    }
    else if(cp>sp){
        l=cp-sp;
        per=(l/cp)*100;
        printf("profit percent is %f",per);
    }
    else{
        printf("profit percent 0 l=0");
    }
    return 0;
}

//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main() {
    float t,h,e,m,sc,tot;
    printf("enter 5 sub marks:");
    scanf("%d%d%d%d%d",&t,&h,&e,&m,&sc);
    tot=(t+h+e+m+sc)/5.0;
    if(tot>=33)
        printf("pass");
    else
        printf("fail");
    return 0;
}

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main() {
    char ch='p';
    if(ch>='a' && ch<='z')
        printf("lowercase");
    if(ch>='A' && ch<='Z')
        printf("upppercase");
    return 0;
}
