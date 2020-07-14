#include <stdio.h>//Вывести квадратную матрицу по заданному N
int main()
{
int n,b=1;
printf("n=");
scanf("%d",&n);
int a[n][n];
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
a[i][j]=b;
b++;
}
}
for(int i=0; i<n; i++) 
{
for(int j=0; j<n; j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
