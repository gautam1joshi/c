#include<stdio.h>
#include<string.h>

int main()
{
    int z[20],a,i=0,count=0;
    printf("enter number\n");
    scanf("%d",&a);

    while(a !='\0')
    {
        z[i] = a%2;
        a = a/2;
        i++;


    }

    for (int d = 0; d < i; d++)
    {
        if(z[d]==1)
        {
            count++;

        }
    
    }
    printf("number of 1's is %d",count);

    return 0;



}