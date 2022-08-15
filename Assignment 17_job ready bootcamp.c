//Ques1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    int i;
    char str[20];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    for(i=0;str[i];++i);
    printf("\nlength of the string %d",i);

    return 0;
}

//Ques2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    int i,count=0;
    char str[20],ch;

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    printf("\nenter the character:");
    scanf("%c",&ch);


    for(i=0;str[i];++i)
    {
        if(str[i]==ch)
            count++;
    }

    printf("total occurance of given character is %d",count);

    return 0;
}

//Ques3. Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[20],ch;

    printf("enter the string:");
    gets(str);
    strlwr(str);

    printf("String is :%s",str);


    for(i=0;str[i];++i)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }

    printf("\ntotal occurance of vowel character is %d",count);

    return 0;
}

//Ques4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    for(i=0;str[i];++i)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }

    printf("\nstring into uppercase %s",str);

    return 0;
}

//Ques5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    for(i=0;str[i];++i)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    }

    printf("\nstring into lowercase %s",str);

    return 0;
}


//Ques6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    for(i=0;i<strlen(str)/2;i++)
    {
       char ch=str[i];
       str[i]=str[strlen(str)-1-i];
       str[strlen(str)-1-i]=ch;
    }

    printf("\nreverse of string %s",str);

    return 0;
}

//Ques7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    int i,alpa=0,digit=0,spch=0;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    for(i=0;str[i];++i)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alpa++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            digit++;
        }
        else
        {
            spch++;
        }

    }

    printf("\ntotal number of alphabets %d",alpa);
    printf("\ntotal number of digits %d",digit);
    printf("\ntotal number of special character  %d",spch);


    return 0;
}

//Ques8. Write a program in C to copy one string to another string.
#include<stdio.h>

int main()
{
    int i;
    char str1[20],str2[20];

    printf("enter the string:");
    gets(str1);

    printf("String str1 is :%s",str1);


    for(i=0;str1[i];++i)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';

    printf("\n new string str2 after copying value from str1  is %s",str2);

    return 0;
}

//Ques9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char str[20];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

     for(i=0;i<strlen(str)-1;i++)
     {
         for(j=i+1;j<strlen(str);j++)
         {
             if(str[i]>str[j])
             {
                 temp=str[i];
                 str[i]=str[j];
                 str[j]=temp;
             }
         }

     }

     printf("\nsorted string is: ");

     printf("%s",str);


    return 0;
}




//Ques10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>

int main()
{
    int i;
    char str1[100];
    char freeq[256]={0};

    printf("enter the string:");
    gets(str1);

    printf("String str1 is :%s",str1);


    for(i=0;str1[i];++i)
    {
        freeq[str1[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(freeq[i]!=0)
            printf("\n%c-->%d",i,freeq[i]);
    }

    return 0;
}

