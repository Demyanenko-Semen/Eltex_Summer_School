#include <stdio.h>//Заполнить верхний треугольник матрицы 1, а нижний 0
int main()
{
int n;
printf("n=");
scanf("%d",&n);
int a[n][n];
for(int i=0; i<n; i++)
{
for(int j=0; j<n; j++)
{
if((i == 0) || (j == 0) || (i+j<n))
{
a[i][j]=1;
}
else
{
a[i][j]=0;
}
}
}
printf("a[n*n]=\n");
for(int i=0; i<n; i++) 
{
for(int j=0; j<n; j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}

