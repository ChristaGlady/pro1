#include <stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();
printf("Enter any number: ");
scanf("%d", &num);
 if(num > 0)
{
printf("Number is POSITIVE");
}
else if(num < 0)
{
printf("Number is NEGATIVE");
}
else
{
printf("Number is ZERO");
}
getch();
return 0;
} 

