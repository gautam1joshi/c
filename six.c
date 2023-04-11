#include<stdio.h>
#include<string.h>


int main()
{
    char a[20],b[20];

    printf("enter string\n");
    scanf("%s",a);

    for (int i = 0; i < strlen(a); i++)
    {
        
    if(a[i] !='-' && (a[i] >='a' && a[i]<='z') || (a[i] >='A' && a[i]<='Z'))
    {
        for (int j = a[i]; j <= a[i+2]; j++)
        {
            printf(" %c",j);
        }
    }

    else if(a[i] !='-')
    {
        for (int j = (int)a[i]; j <= (int)a[i+2]; j++)
        {
            printf(" %d",j-48);
        }
    }

  }
       
    
    


    return 0;
}