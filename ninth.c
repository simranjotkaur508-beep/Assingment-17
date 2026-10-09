#include <stdio.h>
int main()
{
    int i,j;
    char k;
    for (i=1;i<=5;i++)
    {
        k='A'-1+1;
    for (j=1;j<=5;j++)
   
   {
    if(j<=i)
     printf("%c",k++);
    
     else
     printf(" ");
   }
   printf("\n");
    }

    return 0;
}
