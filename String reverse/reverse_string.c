#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
int fd, a;
char buf;
fd=open("text.txt", O_RDONLY);
if (fd < 0)
{
perror("OPEN FAILURE!"); 
exit(1);
}
int n=lseek(fd, 0, SEEK_END);
for(int i = n-1; i >= 0; i--)
{
lseek(fd, i, SEEK_SET);
a=read(fd, &buf, 1);
putchar(buf);
}
printf("\n");
close(fd);
return 0;
}
