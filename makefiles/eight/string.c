#include<stdio.h>
#include<string.h>

void string_comp()
{
    char a[20],b[20];
    printf("enter first string\n");
    scanf("%s",a);
    printf("enter second string\n");
    scanf("%s",b);

    if(strcmpi(a,b)==0)
    {
        printf("both are same");
    }

    else
    {
        printf("both are diff");
    }
    

}   