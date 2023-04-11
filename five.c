#include<stdio.h>
#include<string.h>
int main()
{

    int a[] = {1,3,5,7,2,4},c=1;
    int z;

    printf("enter number you want to find\n");
    scanf("%d",&z);

    for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    {
        
        if(a[i]==z)
        {
            printf("number is at a %d",i);
            c = 0;
            continue;

        }
    }

    if(c==1)
    {
        printf("-1");
    }
    
  

    return 0;
}