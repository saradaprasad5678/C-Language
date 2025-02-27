//Write a program to print Hello Students on the screen.

#include<stdio.h>
int main()
{
  printf("Hello Students");
}

//Write a program to print Hello in the first line and Students in the second line.

#include<stdio.h>
int main()
{
  printf("Hello \nStudents");
}

//Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

#include<stdio.h>
int main()
{
  printf("\"MySirG\"");
}

/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.

	Expected output format – “Area of circle is A having the radius R”. Replace A with area
	& R with radius.*/
#include<stdio.h>
int main()
{
  int r;
  float area;
  printf("enter the radius:");
  scanf("%d",&r);
  area=3.14*r*r;
  printf("area of circle is %f having the radius %d",area,r);
}

// WAP to calculate the length of String using printf function.

#include<stdio.h>
int main()
{
  int x=printf("prasad");
  printf("length of string is %d",x);
}

//WAP to print the name of the user in double quotes.
//Expected output format – “Hello , Amit Kumar”

#include<stdio.h>
int main()
{
  printf("\"Hello,Prasad\"");
}

//WAP to print “%d” on the screen.

#include<stdio.h>
int main()
{
  printf("%%d");
}

//WAP to print “\n” on the screen.
#include<stdio.h>
int main()
{
  printf("\\n");
}

//WAP to print “\\” on the screen.
#include<stdio.h>
int main()
{
  printf("\\\\");
}

/*WAP to take date as an input in below given format and convert the date format and
display the result as given below.
	
	User Input date format – “DD/MM/YYYY” (27/11/2022)
	
	Output format –
“		Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/\

#include<stdio.h>
int main()
{
  int d,m,y;
  printf("\" DD/MM/YYYY\"");
  scanf("%d%d%d",&d,&m,&y);
  printf("Day-%d,Month-%d,Year-%d",d,m,y);
}

/*WAP to take time as an input in below given format and convert the time format and
display the result as given below.
	
	User Input date format – “HH:MM”
	
	Output format – “HH hour and MM Minute”
		Example –
“			11:25” converted to “11 Hour and 25 Minute” */

#include<stdio.h>
int main()
{
  int h,m;
  printf("HH:MM-");
  scanf("%d%d",&h,&m);
  printf("%d Hour and %d Minute",h,m);
}
