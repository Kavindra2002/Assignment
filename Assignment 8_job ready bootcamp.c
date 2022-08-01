//Ques1
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


//Ques2
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


//Ques3
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques4
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


//Ques5
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


//Ques6
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques7
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i||j>=5+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques8
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("%d",j<4?k++:k--);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques9
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
                printf("%d",j<4?k++:k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques10
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
                printf("%d",j<4?k++:k--);
            else
            {
                printf(" ");
                if(j==4)
                    k--;

            }

        }
        printf("\n");
    }
}

//Ques11
#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                printf("%c",j<5?k++:k--);
            }

            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques12
#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
                printf("%c",j<4?k++:k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques13
#include<stdio.h>
int main()
{
    int i,j;
    char k;

    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
                printf("%c",j<7?k++:k--);
            else
            {
                printf(" ");
                if(j==7)
                    k--;

            }

        }
        printf("\n");
    }
}


//Ques14
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==i||i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}

//Ques15
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==6-i||j==5||i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}

//Ques16
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==6-i||j==4+i||i==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}

//Ques17
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==i||j==10-i||i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


//Ques18
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j>=6-i&&j<=4+i)&&(j>=i-4&&j<=14-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

//Ques19
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i=1;i<=10;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((i==1)&&(j==7))
                printf("MySirG");

            if(i==1&&j>=7&&j<=12)
                continue;
            if(j>=i&&j<=19-i)
                    printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}


