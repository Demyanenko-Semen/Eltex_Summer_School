#include <stdio.h>//Вывести заданный массив размером N в обратном порядке
int main()
{
int n=0;
printf("n=");
scanf("%d",&n);
int a[n];
printf("a[n]=\n");
for(int i=0; i<n; i++)
{
scanf("%d",&a[i]);
}
printf("reversed a[n]=\n");
for(int i=n-1; i>=0; i--) 
{
printf("%d\t",a[i]);
}
printf("\n");
return 0;
}

