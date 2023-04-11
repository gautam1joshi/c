#include<stdio.h>
#include<string.h>

int main()
{
    char num[][10] = {"","one","two","three","four","five","six","seven","eight","nine"};
    char b[][10] = {"thousand","hundred"};
    char c[][10] = {"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char d[10];
    int a,k,m;

    scanf("%s",d);
    a=atoi(d);

    if(strlen(d)<4)
    {
        if (strlen(d)==1)
        {
            printf("%s",num[a]);   
        }
        
        
        if (strlen(d)==2)
        {
            
            if((a%10)==0)
            {
              
                k = a/10;
                printf("%s",c[k-1]);

            }
            else
            {
                k = a/10;
                printf("%s",c[k-1]);
                printf(" %s",num[(a%10)]);
            }
        }
        //three number

        if (strlen(d)==3)
        {          
            // if((a%100)==0)
            // {
                 printf("%s ",num[(k/10)]);
                printf("%s ",b[1]);
            // }
            else if((a%10)==0)
            {
                // printf("%s ",num[(m/10)]);
                // printf("%s ",b[1]);
                printf("%s",c[(k%10)]);
            }

            else
            {
                // printf("%s ",num[(m/10)]);
                // printf("%s ",b[1]);
                printf("%s",c[(k%10)]);
                printf(" %s ",num[(a%10)]);
                
            }           
        }              
    }
}