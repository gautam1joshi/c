#include<stdio.h>
#include<string.h>




int main()
{
    int l,a,b,c,i=0;
    int z[20];
    printf("entert number \n");
    scanf("%d",&c);

    printf("enter the start posiiton\n");
    scanf("%d",&a);

    printf("enter the number of counts\n");
    scanf("%d",&b);
    
    //convert binary

    while (c!=0)
    {
        z[i]=c%2;
        c =c/2;
        i++;

    }

    
    //revers and get orignal



    for (int q = 0; q < i/2; q++)
    {
        l = z[q];
        z[q] = z[i-q-1];
        z[i-q-1] = l;

    }
    

    //print binary numbers

    for (int q = 0; q <i; q++)
    {
        
        printf("%d",z[q]);
    }
    printf("\n");
    //  printf("\n%d\n",i);
    
    //invers number from a to b 

    for (int q = a; q < (b+a)/2; q++)
    {
      
        l = z[q];
        z[q] = z[b+a-q];
        z[b+a-q] = l;

    }

    //print inverted number

     for (int q = 0; q <i; q++)
    {
        printf("%d",z[q]);
    }



    return 0;
}