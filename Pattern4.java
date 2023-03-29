public class Main
{  
public static void main(String[] args)  
{  
 int row=7;      
  for(int i=row; i>=0; i--)  
 {  

  for (int j=0; j<=i; j++)  
  {  
    if((i==row)||(j==0))
     System.out.print("*");
    else if(j==i)
     System.out.print("*");
    else 
     System.out.print(" ");
  }  
  System.out.println();  
 }  
}  
}  
