#include <stdio.h>/*Задать шестнадцатеричную переменную. Поочерёдно вывести каждый байт
                  Операциями сдвига заменить 3й байт на любой другой, затем вывести 
                  переменнуюи каждый байт для проверки*/ 
int main()
{
int a;
unsigned char c;
printf("the value of a is: ");
scanf("%x",&a);

c=(a & 0x000000FF);
printf("The 1st byte of a is %x\n",c);

c=((a >> 8) & 0xFF);
printf("The 2nd byte of a is %x\n",c);

c=((a >> 16) & 0xFF);
printf("The 3rd byte of a is %x\n",c);

c=((a >> 24) & 0xFF);
printf("The 4th byte of a is %x\n",c);

int nb;
printf("The new 3rd byte is: ");
scanf("%x",&nb); 
a=(a & 0xFF00FFFF);
a=(a | nb);

printf("the new value of a is %x\n",a);
c=(a & 0x000000FF);
printf("The 1st byte of a is %x\n",c);

c=((a >> 8) & 0xFF);
printf("The 2nd byte of a is %x\n",c);

c=((a >> 16) & 0xFF);
printf("The 3rd byte of a is %x\n",c);

c=((a >> 24) & 0xFF);
printf("The 4th byte of a is %x\n",c);
return 0;
}
