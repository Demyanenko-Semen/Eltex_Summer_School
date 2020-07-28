#include <stdio.h>//Заполнить матрицу числами от 1 до N в квадрате улиткой
int main()
{
int n,i,j,b=1,c=0;
printf("n=");
scanf("%d",&n);
int a[n][n];
while(i<n*n)
{
c++;
for(j=c-1; j<n-c+1; j++)
{
a[c-1][j]=b;
b++;
i++;
}      
for(j=c; j<n-c+1; j++)
{
a[j][n-c]=b;
b++;
i++;
}     
for(j=n-c-1; j>=c-1; j--)
{
a[n-c][j]=b;
b++;
i++;
}      
for(j=n-c-1; j>=c; j--)
{
a[j][c-1]=b;
b++;
i++;
}      
}
printf("a[n*n]=\n");
for(int i = 0; i < n; i++) 
{
for(int j = 0; j < n; j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
