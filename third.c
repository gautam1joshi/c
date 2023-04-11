#include<stdio.h>

int main()
{
    int a,z[20],i=0;

    printf("enter number \n");
    scanf("%d",&a);
    while (a!=0)
    {
        z[i]= a%10;
        a =a/10;
        i++;
    }

    for (int s = 0; s< i; s++)
    {
        printf("%d",z[s]);
    }  
    return 0;
}