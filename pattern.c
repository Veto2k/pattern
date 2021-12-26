#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("ENTER THE SIZE OF THE TRIANGLE\n");
    scanf("%d",&n);
    printf("*\n");
    for(i=0;i<=n;i++)
    {
        printf("*");
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=0;i<=n+3;i++)
    {
        printf("*");
    }

}
