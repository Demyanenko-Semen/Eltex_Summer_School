#include <stdio.h>/*Задать десятеричную переменную. С помощью указателей поочерёдно вывести
                  каждый байт и заменить любой байт на другой, затем вывести переменную 
                  и каждый байт для проверки*/ 
int main()
{
int a,b,nb;
printf("The value of a is ");
scanf("%d",&a);
printf("\n");
char *ptr;
ptr=(char*) &a;

printf("The 1st byte of a is %d\n",*ptr);
ptr++;

printf("The 2nd byte of a is %d\n",*ptr);
ptr++;

printf("The 3rd byte of a is %d\n",*ptr);
ptr++;

printf("The 4th byte of a is %d\n",*ptr);

printf("\n");
ptr=(char*) &a;

printf("Choose a byte to change: ");
scanf("%d",&b);
printf("The new byte is ");
scanf("%d",&nb);
printf("\n");

ptr+=b-1;
*ptr=nb;

ptr=(char*) &a;
printf("The new value of a is %d\n",a);

printf("The 1st byte of a is %d\n",*ptr);
ptr++;

printf("The 2nd byte of a is %d\n",*ptr);
ptr++;

printf("The 3rd byte of a is %d\n",*ptr);
ptr++;

printf("The 4th byte of a is %d\n",*ptr);
return 0;
}
