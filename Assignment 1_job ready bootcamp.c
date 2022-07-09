// ques 1. Write a program to print Hello Students on the screen.

#include<stdio.h>
int main()
{
    printf("Hello");
    return 0;
}


//ques 2.Write a program to print Hello in the first line and Students in the second line.
#include<stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;

}


//Ques 3.Write a program to print “MySirG” on the screen. (Remember to print in double quotes)

#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;

}


//Ques 4.WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

#include<stdio.h>
int main()
{
    int area,radius;
    printf("enter the radius of circle ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("“Area of circle is %d having the radius %d",area,radius);
    return 0;

}


//ques 5. WAP to calculate the length of String using printf function.

#include<stdio.h>
int main()
{
   printf("string=");
   int x = printf("Kavindra");
   printf("\nlength of string is %d",x);
  return 0;
}

/*ques 6-
WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar”
*/

#include<stdio.h>
int main()
{
   printf("\"Hello , Amit Kumar\"");
   return 0;
}

//ques7. WAP to print “%d” on the screen.

#include<stdio.h>
int main()
{
   printf("%%d");
   return 0;
}

//ques8. WAP to print “\n” on the screen.

#include<stdio.h>
int main()
{
   printf("\\n");
   return 0;
}


//ques9. WAP to print “\\” on the screen.

#include<stdio.h>
int main()
{
   printf("\\");
   printf("\\");
   return 0;
}

/*
ques10.
 WAP to take date as an input in below given format and convert the date format and display the result as given below.
 User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include <stdio.h>

int main()
{

    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);

    printf("Day-%d,Month-%d,Year-%d",d,m,y);

    return 0;
}


/*
ques 11.
WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”
*/

#include <stdio.h>

int main()
{

    int hr,min;
    scanf("%d:%d",&hr,&min);

    printf("%d Hour and %d minute",hr,min);

    return 0;
}


/*
ques12.
 Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}

*/

answer:-

ineuran7

