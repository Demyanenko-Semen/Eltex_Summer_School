#include <stdio.h>

int main()
{
int a,b,n=0;
printf("n=");
scanf("%d",&n);

struct abonent
{
int phone[11];
char name[20],surname[20];
};

struct abonent list[n];
for(int i=0; i<n; i++)
{
printf("%d\n",i+1);

printf("Имя:");
scanf("%s",list[i].name);

printf("Фамилия:");
scanf("%s",list[i].surname);

printf("Номер телефона:");
scanf("%d",list[i].phone);
printf("\n");
}
printf("Выберите функцию справочника:\n");
printf("Поиск абонента по номеру телефона - 1\n");
printf("Добавление абонента - 2:\n");
printf("Удаление абонента - 3:\n");
scanf("%d",&a);
if(a == 1)
{
printf("Поиск абонента по номеру: ");
scanf("%d",&b);
printf("\n");
for(int i=0; i<n; i++)
{
if(*list[i].phone == b)
{
printf("%d\n",i+1);
printf("Имя:%s\n",list[i].name);
printf("Фамилия:%s\n",list[i].surname);
printf("Номер телефона:%d\n",*list[i].phone);
}
}
}
else
if(a == 2)
{
n++;
struct abonent newlist[n];
for(int i=0; i<n; i++)
{
if(i == n-1)
{
printf("%d\n",i+1);

printf("Имя:");
scanf("%s",newlist[i].name);

printf("Фамилия:");
scanf("%s",newlist[i].surname);

printf("Номер телефона:");
scanf("%d",newlist[i].phone);
printf("\n");
}
else
{
printf("%d\n",i+1);
printf("Имя:%s\n",list[i].name);
printf("Фамилия:%s\n",list[i].surname);
printf("Номер телефона:%d\n",*list[i].phone);
}
}
}
if(a == 3)
{
printf("Наберите номер телефона абонента, которого хотите удалить:");
scanf("%d",&b);
printf("\n");
a=0;
struct abonent newlist[n];
for(int i=0; i<n; i++)
{
if(*list[i].phone != b)
{
newlist[a]=list[i];
a++;
}
}
n=a;
for(int i=0; i<n; i++)
{
printf("%d\n",i+1);
printf("Имя:%s\n",newlist[i].name);
printf("Фамилия:%s\n",newlist[i].surname);
printf("Номер телефона:%d\n",*newlist[i].phone);
}
}
return 0;
}
