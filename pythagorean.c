#include <stdio.h>
#include <cs50.h>
int main(void)
{
int side1,side2,side3,a,b,c;

side1=get_int("side1:");
side2=get_int("side2:");
side3=get_int("side3:");

if(side1>side2 && side1>side3)
{
c=side1;
a=side2;
b=side3;
}
else if(side2>side1 && side2>side3)
{
c=side2;
a=side1;
b=side3;

}
 else
{
c=side3;
a=side1;
b=side2;
}


if(a*a+b*b==c*c)
{
printf("yes\n");
}
else
{
printf("no\n");
}
}
