//Ques1. Write a function to calculate length of the string
#include<stdio.h>
int lenthofstr(char str[]);
int main()
{
    int i;
    char str[20];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    printf("\nlength of the string %d",lenthofstr(str));

    return 0;
}

int lenthofstr(char str[])
{
    int i;
    for(i=0;str[i];++i);
   return i;
}

//Ques2. Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String before reverse is :%s",str);

    reverse(str);
    printf("\nreverse of string is : %s",str);

    return 0;
}

void reverse(char str[])
{
    int i;
     for(i=0;i<strlen(str)/2;i++)
    {
       char ch=str[i];
       str[i]=str[strlen(str)-1-i];
       str[strlen(str)-1-i]=ch;
    }


}

//Ques3. Write a function to compare two strings.
#include<stdio.h>
void comparestr(char str1[],char str2[]);
int main()
{
    int i;
    char str1[20],str2[20];

    printf("enter the first string :");
    gets(str1);

    printf("enter the second string :");
    gets(str2);

    printf("String str1 is :%s\n",str1);
    printf("String str2 is :%s\n",str2);

    comparestr(str1,str2);

    return 0;
}

void comparestr(char str1[],char str2[])
{
    int i,flag=0;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }

    }
        if(flag==0)
            printf("string are equal");
        else
            printf("string are not equal");
}

//Ques4. Write a function to transform string into uppercase
#include<stdio.h>
void uppercase(char str[]);
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);
    uppercase(str);


    return 0;
}
void uppercase(char str[])
{
    int i;
    for(i=0;str[i];++i)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }

    printf("\nstring into uppercase %s",str);
}

//Ques5. Write a function to transform a string into lowercase
#include<stdio.h>
void lowercase(char str[]);
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    lowercase(str);

    return 0;
}
void lowercase(char str[])
{
    int i;
    for(i=0;str[i];++i)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
    }

    printf("\nstring into lowercase %s",str);

}
//Ques6. Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
void cheakalphanumeric(char str[]);
int main()
{
    int i;
    char str[20];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

    cheakalphanumeric(str);
    return 0;
}

void cheakalphanumeric(char str[])
{
    int i,alpha=0,numeric=0;
    for(i=0;str[i];++i)
    {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            alpha=1;
        if(str[i]>='0'&&str[i]<='9')
            numeric=1;
    }

    if(alpha==1&&numeric==1)
        printf("\nstring is alphanumeric");
    else
        printf("\nstring is not an alpha numberic");

}


//Ques7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
void cheakpalindrome(char str1[]);
int main()
{
    int i;
    char str1[20];

    printf("enter the string :");
    gets(str1);

    printf("String str1 is :%s\n",str1);

    cheakpalindrome(str1);

    return 0;
}

void cheakpalindrome(char str1[])
{
    int i,flag=0;
    for(i=0;i<strlen(str1)/2;i++)
    {
        if(str1[i]!=str1[strlen(str1)-1-i])
        {
            flag=1;
            break;
        }

    }
        if(flag==0)
            printf("it is palindrome");
        else
            printf("not a palindrome");
}


//Ques8. Write a function to count words in a given string

#include<stdio.h>
int countwords(char str[]);
int main()
{
    int i;
    char str[100];

    printf("enter the string:");
    gets(str);

    printf("String is :%s",str);

   printf("\ntotal words in the given string %d",countwords(str)+1);//total word=count+1
    return 0;
}

int countwords(char str[])
{
    int i,count=0;
    for(i=0;str[i];++i)
    {
        if(str[i]==' '&&str[i+1]!=' ')
            count++;
    }

    return count;

}

/*9. Write a function to reverse a string word wise. (For example if the given string is
     “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )
*/
#include<stdio.h>
#include<string.h>
void swap(char a[],int i,int j);
int main()
{
    char a[30]=" Mysirg Education Services";
    int i=0,start=0,end=0,flag=0;
    while(a[i]!='\0')
    {
        while(a[i]!=' ')
        {

            if(a[i]=='\0')
            {
               flag=1;
               break;
            }

            i++;
            end++;
        }
        swap(a,start,end-1);
        if(flag==1)
            break;
        start=end++;
        i++;
    }

    swap(a,0,i-1);
    printf("%s",a);
    return 0;
}
void swap(char a[],int i,int j)
{
    char temp;
    while(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

}


//Ques10. Write a function to find the repeated character in a given string.
#include<stdio.h>
//
int main()
{
    int i;
    char str1[100];
    char freeq[256]={0};

    printf("enter the string:");
    gets(str1);

    printf("String str1 is :%s\n",str1);


    for(i=0;str1[i];++i)
    {
        freeq[str1[i]]++;
    }

    printf("repeated character in a given string are : ");

    for(i=0;i<256;i++)
    {
        if(freeq[i]>1)
            printf("%c-- >%d",i,);
    }

    return 0;
}



