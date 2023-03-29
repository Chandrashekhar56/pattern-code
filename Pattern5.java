public class Pattern5
{ 
 public static void main(String[] args)  
{  
 int row=7,a=1;      
  for(int i=row; i>=0; i--)  
 {  

  for (int j=0; j<=i; j++)  
  {  
    if((i==row)||(j==0))
     System.out.print(a+"");
    else if(j==i)
     System.out.print(a+"");
    else 
     System.out.print(" ");
  } 
  a=a+1;
  System.out.println();  
 }  
}  
}  
