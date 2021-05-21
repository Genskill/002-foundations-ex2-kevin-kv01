#include<stdio.h>
#include<cs50.h>

int main(void)
{
   int type,rows,i,j,k;
   type=get_int("Enter type of pattern (1 or 2) ");
   rows=get_int("Number of rows");
    
   if(type==1){
    for(i=rows;i>0;i--){
      for(j=i;j>0;j--){
 	     printf("#"); 	     
      }
      printf("\n");   
    }
   }
          
   if(type==2){
     for(i=1;i<=rows;i++){  
       for(k=i;k<rows;k++){
 	      printf(" "); 	     
       }
       for(j=0;j<i;j++){
 	      printf("#");
 	    }
 	    printf("\n");
     } 
   }
}
