#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = {"namespace is this"};
    char b[10]={};
    int i, j;

    scanf("%s",&b);
   

    for (i = 0; i < strlen(a); i++)
    {

        if (b[0] == a[i])
        {
            j = 1;
            while (b[j] == a[i + j] && a[i] != '\0')
            {
                //printf("%d & %d  & %c\n", j, i, b[j]);
                if (j == strlen(b))
                {
                    
                    break;
                }
                

                j++;
            }
            
        }
        
    }

    if (j == strlen(b))
    {
        printf("yes it's match\n");
        printf("%s\n",a);
       
    }

    else
    {
        printf("no it's not match");
    }

    return 0;
}