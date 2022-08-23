//Ques1Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][20];
    int i,j,vowel=0;
    for(i=0;i<5;i++)
        gets(a[i]);

    for(i=0;i<5;i++)
    {
        for(j=0;a[i][j]!='\0';j++)
        {
            if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u'||a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||a[i][j]=='U')
             vowel++;

        }
        printf("%s-->%d\n",a[i],vowel);
        vowel=0;
    }
  return 0;
}

//Ques2 Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10][20],t[20];
    int i,j;
    for(i=0;i<10;i++)
        gets(a[i]);

    printf("city name in sorted form are :")
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }

        printf("%s ",a[i]);

    }
   return 0;
}

//Ques3 Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
    char a[5][20]={"ram","sita","gita","kavindra","shyam"};
    int i;
    for(i=0;i<5;i++)
        printf("%s ",a[i]);


  return 0;
}

//Ques4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char p[20];
    char a[5][20]={"ram","sita","gita","kavindra","shyam"};

    printf("list of string is : ");
    for(i=0;i<5;i++)
        printf("%s ",a[i]);


    printf("\nenter the string that you want to search: ");
    gets(p);

  for(i=0;i<5;i++)
    {
      if(strcmp(a[i],p)==0)
       {
            break;
       }

    }

    if(i==5)
       printf("string not found ");
    else
       printf("string found at %d postion",i+1);

  return 0;
}

//Ques5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[5][100]={"kavi@gmail.com","umanggmail.com","ironman@gmailcom","startindustries@gmail.com","wkandagmail.com"};

    printf("list of string is : ");
    for(i=0;i<5;i++)
        printf("%s ",a[i]);


    printf("\nodd email are: \n");
  for(i=0;i<5;i++)
    {
      if(strchr(a[i],'@')==0)
       {
            printf("%s\n",a[i]);
       }

    }

  return 0;
}

//Ques6. Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
void cheakpalindrome(char a[]);
int main()
{
    int i;
    char a[5][20]= {"madam","noon","kavindra","level","ram"};

   printf("list of string is : ");
    for(i=0;i<5;i++)
        printf("%s ",a[i]);

    printf("\npalindrome string is : ");
     for(i=0;i<5;i++)
        cheakpalindrome(a[i]);
    return 0;
}

void cheakpalindrome(char a[])
{
    int i,flag=0;
    for(i=0;i<strlen(a)/2;i++)
    {
        if(a[i]!=a[strlen(a)-1-i])
        {
            flag=1;
            break;
        }

    }
        if(flag==0)
            printf("%s ",a);
        flag=0;

}

//Ques7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
       int i;
      char str[20];

     printf("enter the string:");
     gets(str);

   is_valid_ip(str)? printf("Valid\n"): printf("Not valid\n");

}

int is_valid_ip(char* ip_str)
{
    int i,dots = 0;

    if (ip_str == NULL)
        return 0;

    char* ptr= strtok(ip_str,".");

    if (ptr == NULL)
        return 0;

    while (ptr) {

        /* after parsing string, it must contain only digits */
        if (!valid_digit(ptr))
            return 0;

       int num = atoi(ptr);

        /* check for valid IP */
        if (num >= 0 && num <= 255) {
            /* parse remaining string */
            ptr = strtok(NULL,".");
            if (ptr != NULL)
                ++dots;
        }
        else
            return 0;
    }

    if (dots != 3)
        return 0;
    return 1;
}

int valid_digit(char* ip_str)
{
    while (*ip_str) {
        if (*ip_str >= '0' && *ip_str <= '9')
            ++ip_str;
        else
            return 0;
    }
    return 1;
}

//Ques8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,w1=-1,w2=-1,min=10000,temp;
    char p[20],q[20];
    char a[5][20]={"ram","sita","gita","kavindra","shyam"};

    printf("list of string is : ");
    for(i=0;i<5;i++)
        printf("%s ",a[i]);


    printf("\nenter the first string: ");
    gets(p);

    printf("\nenter the second string: ");
    gets(q);

  for(i=0;i<5;i++)
    {
      if(strcmp(a[i],p)==0)
       {
            w1=i;
       }

       if(strcmp(a[i],q)==0)
       {
            w2=i;
       }




    }
     if(w1!=-1&&w2!=-1)
       {
        temp=abs(w2-w1);
        if(temp<min)
          min=temp;

       }
    printf("%d ",min-1);

  return 0;
}

/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char p[20];
    char a[5][20]={"ram","sita","gita","kavindra","shyam"};

    printf("list of valid user names is : ");
    for(i=0;i<5;i++)
        printf("%s ",a[i]);


    printf("\nenter the user name: ");
    gets(p);

  for(i=0;i<5;i++)
    {
      if(strcmp(a[i],p)==0)
       {
           printf("enter the number to calculate factorial:");
           scanf("%d",&n);
           factorial(n);
           return 0;
       }

    }

 printf("enter valid user name");
 return 0;

}

void factorial(int n)
{
    int i,fac=1;
    for(i=1;i<=n;i++)
        fac=fac*i;
    printf("%d",fac);
}

//Ques10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,flag=0;
    char p[20];
    char q[20];
    char a[5][2][20]={{"ram","6388"},{"sita","123"},{"gita","6388"},{"kavindra","6388"},{"shyam","9580"}};

    printf("list of valid user names is :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        printf("%s ",a[i][j]);

        printf("\n");

    }


     printf("\nenter the username: ");
    gets(p);

    printf("\nenter the password: ");
    gets(q);



  for(i=0;i<5;i++)
    {
      if((strcmp(a[i][0],p)==0)&&(strcmp(a[i][1],q)==0))
       {
           printf("login succesfull:");
           flag=1;
       }

    }

if(flag==0)
 printf("username or password not matched");

 return 0;

}
