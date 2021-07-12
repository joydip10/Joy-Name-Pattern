#include<stdio.h>
int main()
{
    int i,j,n;
    printf("take any integer: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n)
            {
                printf("*");
            }
            else
            {
                if(j==n)
                {
                    printf("*");
                }
                else if(j==1)
                {
                    if(i>(n/2)+1)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf(" ");
                }
            }
        }
        for(j=n+1;j<=n+1;j++)
        {
            printf(" ");
        }
        for(j=n+2;j<=2*n+1;j++)
        {
            if(i==1 || i==n)
            {
                printf("*");
            }
            else
            {
                if(j==n+2 || j==2*n+1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        for(j=2*n+2;j<=2*n+2;j++)
        {
            printf(" ");
        }
        for(j=2*n+3;j<=3*n+2;j++)
        {
            if(i>n/2)
            {
                if(j==((2*n+3)+(3*n+2))/2)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j==((2*n+3)-1)+i || j==((3*n+2)+1)-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
