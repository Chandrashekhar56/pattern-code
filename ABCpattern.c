#include <stdio.h>
int main()
{
    int z=65,k=65;
    for(int i=1;i<27;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%2c",z);
        }
        z++;
        for(int j=i;j<52-i;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%2c",k);
        }
        k++;
        printf("\n");
    }
   return 0;
}
