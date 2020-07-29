#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
int a, b, c, n, tphone;
unsigned int i;
char tname[20], tsurname[20];
printf("n=");
scanf("%d",&n);

struct abonent
{
int phone;
char name[20],surname[20];
};

struct abonent *ptr;
ptr = (struct abonent *)malloc(n * sizeof(struct abonent));

for(i=0; i<n; i++)
{
printf("%d\n",i+1);

printf("Имя:");
scanf("%s",ptr[i].name);

printf("Фамилия:");
scanf("%s",ptr[i].surname);

printf("Номер телефона:");
scanf("%d",&ptr[i].phone);
printf("\n");
}
while(a != 5)
{
printf("Выберите функцию справочника:\n");
printf("Поиск абонента по номеру телефона - 1\n");
printf("Добавление абонента - 2:\n");
printf("Удаление абонента - 3:\n");
printf("Вывести список абонентов - 4:\n");
printf("Выход из справочника - 5:\n");

scanf("%d",&a);

if(a == 1)
{
printf("Поиск абонента по номеру: ");
scanf("%d",&b);
printf("\n");
for(i=0; i<n; i++)
{
if(ptr[i].phone == b)
{
printf("%d\n",i+1);
printf("Имя:%s\n",ptr[i].name);
printf("Фамилия:%s\n",ptr[i].surname);
printf("Номер телефона:%d\n",ptr[i].phone);
}
}
}
else
if(a == 2)
{
n++;
ptr = (struct abonent *)realloc(ptr, (n) * sizeof(struct abonent));
i++;
printf("%d\n", i);

printf("Имя:");
scanf("%s",tname);

printf("Фамилия:");
scanf("%s",tsurname);

printf("Номер телефона:");
scanf("%d",&tphone);
printf("\n");
strcpy(ptr[i-1].name, tname);
strcpy(ptr[i-1].surname, tsurname);
ptr[i-1].phone=tphone;
}
else
if(a == 3)
{
printf("Наберите номер телефона абонента, которого хотите удалить:");
scanf("%d",&b);
printf("\n");
for(i=0; i<n; i++)
{
if(ptr[i].phone == b)
{
c=i;
for(int i=c; i<n; i++)
{
strcpy(ptr[i].name,ptr[i+1].name);
strcpy(ptr[i].surname,ptr[i+1].surname);
ptr[i].phone=ptr[i+1].phone;
}
n--;
}
}
for(i=0; i<n; i++)
{
printf("%d\n",i+1);
printf("Имя:%s\n",ptr[i].name);
printf("Фамилия:%s\n",ptr[i].surname);
printf("Номер телефона:%d\n",ptr[i].phone);
}
}
else
if (a == 4)
{
for(i=0; i<n; i++)
{
printf("%d\n",i+1);
printf("Имя:%s\n",ptr[i].name);
printf("Фамилия:%s\n",ptr[i].surname);
printf("Номер телефона:%d\n",ptr[i].phone);
printf("\n");
}
}
}
free(ptr);
return 0;
}
