#include <stdio.h>
int main()
{   
    int z=1,i,j;
    for( i=0;i<=4;i++)
    {
        for( j=0;j<=8;j++)
        {
            if((i==j)||(j==8-i))
            {
                printf("%d",z);
            }
            else
            {
                printf(" ");
            }
        }
        z++;
        printf("\n");
    }
    --z;
    --z;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=8;j++)
        {
            if((j==3-i)||(j==5+i))
            {
                printf("%d",z);
            }
            else
            {
                printf(" ");
            }
        }
        --z;
        printf("\n");
    }
    return 0;
}
/*
output: 

1       1
 2     2 
  3   3  
   4 4   
    5    
   4 4   
  3   3  
 2     2 
1       1

*/
