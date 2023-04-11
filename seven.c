#include<stdio.h>
#include<string.h>

int main()
{
    char a[] ="hello";
    int i=0;

    printf("enter string\n");
    // scanf("%s",a);
    printf("enter string is %s\n",a);

    for(;;)
    {
        i++;
        if(a[i]=='\0')
        {
            break;
        }
    }
    printf("%d",i);

    return 0;    

}
