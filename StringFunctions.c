#include<stdio.h>
int length(char *);
char cat(char *,char *,char *);
int main()
{
    char a[100],b[100],c[100];
    int len;
    printf("Enter the string: ");
    gets(a);
    len=length(a);
    printf("Length of the string=%d\n",len);
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    cat(a,b,c);
    printf("Resultant string=%s",c);
}
int length(char *x)
{
    char *y;
    y=x;
    while(*x!='\0')
        x++;
    return (x-y);
}
char cat(char *x,char *y,char *z)
{
    while(*x!='\0')
        *z++=*x++;
    while(*y!='\0')
        *z++=*y++;
    *z='\0';
}
