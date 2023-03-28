#include <stdio.h>
int main()
{
    int i,j;
    int left=4,right=4; 
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(i==1&&j==5)
                printf("*");
            else if(i==2 && (j==4||j==6))
                printf("*");
            else if(i==3&&(j==1||j==2||j==3||j==7||j==8||j==9))
                printf("*");
            else if(i==4&&(j==2||j==8))
                printf("*");
            else if(i==5&&(j==3||j==7))
                printf("*");
            else if(i==6&&(j==2||j==8||j==5))
                printf("*");
            else if(i==7&&(j==1||j==9||j==3||j==7))
                printf("*");
            else if(i==8&&(j==0||j==9))
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

/* output:
          
     *    
    * *   
 ***   ***
  *     * 
   *   *  
  *  *  * 
 * *   * *
*         * 
*/
