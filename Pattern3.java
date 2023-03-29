public class Pattern3
{  
public static void main(String[] args)  
{  
 int row=4,a=10;      
  for(int i=row; i>=0; i--)  
 {  

  for (int j=0; j<i; j++)  
  {  
    System.out.print(a+" "); 
    a--;
  }  
  System.out.println();  
 }  
}  
}  
