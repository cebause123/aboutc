#include<stdio.h>
union abc   
{
    int a;
    char b;
};
int main()
{
    union abc c=
    {
        .b=1
    };
 c.a=0x01;
 if(c.b==0x01)
 {
    printf("little endian\n");
 }
 printf("%d %d\n",c.a,c.b);
 return 0;
 }