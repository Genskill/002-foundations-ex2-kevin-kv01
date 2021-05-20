#include <stdio.h>
#include <cs50.h>

int main ()
{
int pattern,rows;

pattern=get_int("Enter your pattern(1 or 2):",pattern);
rows=get_int("Enter number of rows:",rows);

if(pattern==1)
{
  for(int i=1;i<=rows;i++)
   {
    for(int j=0;j<i;j++)
    printf("#");
    printf("\n");
   }
}
else if(pattern==2)
{
 for(int i=1;i<=rows;i++)
  {
    for(int j=rows-1;j>=i;j--)
    {
    printf(" ");
    }
     for(int k=1;k<=i;k++)
      {
        printf("#");
        }
         printf("\n");
        }
