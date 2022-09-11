//Ques1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
int main()
{
    char *ptr, c;
    int i=0,j=1;

    ptr=(char*)malloc(sizeof(char));

    printf("enter the string :");

    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char*)realloc(ptr,j*sizeof(char));

        ptr[i]=c;
        i++;
    }
    ptr[i]='\0';

    printf("the entered string is %s",ptr);
    free(ptr);

    return 0;
}

/*ques2
Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.
*/

#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,sum=0;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)calloc(size,sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }


    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }

    printf("average value is %d\n",sum/size);
    free(ptr);


    return 0;
}


//Ques3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,sum=0;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }


    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }

    printf("Sum of all values is %d\n",sum);
    free(ptr);


    return 0;
}

//Ques4. Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
int main()
{
    char *ptr, c;
    int i=0,j=1;

    ptr=(char*)malloc(sizeof(char));

    printf("enter the text :");

    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        ptr=(char*)realloc(ptr,j*sizeof(char));

        ptr[i]=c;
        i++;
    }
    ptr[i]='\0';

    printf("the entered text is %s",ptr);
    free(ptr);

    return 0;
}

//Ques5. Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.

#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,sum=0;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }


    printf("entered value are: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
        sum=sum+*(ptr+i);
    }

    printf("\nSum of all values is %d\n",sum);
    free(ptr);


    return 0;
}

//Ques6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,largest;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }


    largest=ptr[0];
    for(i=1;i<size;i++)
    {
        if(largest<ptr[i])
           largest=ptr[i];

    }

    printf("\nlargest of all values is %d\n",largest);
    free(ptr);


    return 0;
}

//Ques7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
int main()
{
    int*ptr;

    ptr=(int*)malloc(sizeof(int));

    ptr=NULL;

    return 0;
}

//Ques8. Write a program to demonstrate dangling pointers in C.
#include<stdio.h>
int main()
{
    int*ptr;

    ptr=(int*)malloc(sizeof(int));
    *ptr=10;

    printf("Before Free %d\n",*ptr);
    free(ptr);

    printf("After Free %d",*ptr);



    ptr=NULL;

    return 0;
}


Ques9. Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.

#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,sum=0;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)calloc(size,sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }

    printf("values are :-");
    for(i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}

//Ques10. Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
int main()
{
    char *ptr;
    int i=0,size=0,max,min;

    printf("enter the size of array:");
    scanf("%d",&size);

    ptr=(char*)malloc(size*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    printf("enter %d values:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }


    max=ptr[0];
    for(i=1;i<size;i++)
    {
        if(max<ptr[i])
           max=ptr[i];

    }

    printf("\nmaximum of all values is %d\n",max);

    min=ptr[0];
    for(i=1;i<size;i++)
    {
        if(min>ptr[i])
           min=ptr[i];

    }

    printf("\nminimum of all values is %d\n",min);
    free(ptr);


    return 0;
}


