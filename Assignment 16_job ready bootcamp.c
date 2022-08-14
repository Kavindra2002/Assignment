//Ques1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],sumarr[3][3];
    int i,j;

    printf("enter the value in the arr1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr1[i][j]);

    }

    printf("enter the value in the arr2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr2[i][j]);

    }

    printf("sum of arr1 and arr2 is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr1[i][j]+arr2[i][j]);
        printf("\n");

    }


    return 0;
}

//Ques2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],c[3][3];
    int i,j,k,sum=0;

    printf("enter the value in the arr1\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr1[i][j]);

    }

    printf("enter the value in the arr2\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr2[i][j]);

    }

    printf("product of arr1 and arr2 is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            c[i][j]=sum;
            sum=0;

        }
    }

     for(i=0;i<3;i++)   //printing the product of array
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}

//Ques3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int arr[3][3],arrtrans[3][3];
    int i,j;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }

    printf("Array after transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             arrtrans[i][j]=arr[j][i];
           printf("%d ",arrtrans[i][j]);

        }

        printf("\n");

    }

return 0;
}

//Ques4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,sumdigonal=0;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i==j)
            sumdigonal=sumdigonal+arr[i][j];
        }

    }

    printf("sum of digonal is %d",sumdigonal);
return 0;

}

//Ques5. Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,sumdigonal=0;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i+j==2)
            sumdigonal=sumdigonal+arr[i][j];
        }

    }

    printf("sum of digonal is %d",sumdigonal);
return 0;

}

//Ques6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,rsum[3],csum[3];

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }

    printf("sum of rows is\n");
    for(i=0;i<3;i++)
    {
        rsum[i]=0;
        for(j=0;j<3;j++)
        {
           rsum[i]=rsum[i]+arr[i][j];
        }
        printf("%d",rsum[i]);
        printf("\n");

    }

    printf("sum of column is\n");
    for(i=0;i<3;i++)
    {
        csum[i]=0;
        for(j=0;j<3;j++)
        {
           csum[i]=csum[i]+arr[j][i];
        }
        printf("%d ",csum[i]);

    }


return 0;

}

//Ques7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i>j)
            arr[i][j]=0;
        }

    }

    printf("display the lower triangular of a given matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
        printf("\n");

    }

return 0;

}

//Ques8. Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(j>i)
            arr[i][j]=0;
        }

    }

    printf("display the uppar triangular of a given matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
        printf("\n");

    }

return 0;

}

//Ques9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,count=0;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(arr[i][j]!=0)
              count++;
        }

    }

    if(count<9/2)
        printf("sparse matrix");
    else
        printf("dense matrix");
return 0;

}

//Ques10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,count=0,maxcount=0,index=0;

    printf("enter the value in the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(arr[i][j]==1)
              count++;
        }
        if(count>maxcount)
            {
                maxcount=count;
                index=i;
            }
        count=0;

    }

    printf("the row with maximum number of 1s is %d",index);
return 0;

}
