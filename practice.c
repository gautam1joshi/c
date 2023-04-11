#include<stdio.h>
#include<string.h>


// to execute it 
// we use terminal
// ./file_name.exe arguments

int main(int argc, char *argv[])
{
    printf("%d arguments are pass",argc);

    for (int i=0; i<=argc ; i++)
    {
        printf("\n%s",argv[i]);
    }


}