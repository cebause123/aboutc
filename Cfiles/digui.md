# code recording
## 1.1234>>1 2 3 4 
```c
#include<stdio.h>
void fac(int n)
{
    if(n>9)
    {
        int m;
        m=n%10;
        
   printf("%d ",m);
    fac(n/10);
    
    }
    else
    printf("%d ",n);
}
int main()
{
    int n=0;
    scanf("%d",&n);
    fac(n);

    return 0;
}
```
### 更精简的函数
>voidfac(int n)
    {
    if(n>9)
    fac(n/10);
    printf("%d",n%10);
    }

## 2.斐波那契数列
```c
#include<stdio.h>
int fib(int n)
{
    if(n<3)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
```

### 速度更快的循环做法
>clue
1 1 2 3 5 8 13 21
 a|b c | | |
///a b c |
//////a b c

```c
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    int i;
    int c;
    if(n<3){
            printf("1\n");
        }
    else{
    for(i=1;i<=n-2;i++)
        {  
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    return 0;
}
```
## 3.青蛙跳台阶
n阶台阶，每次1或2个台阶，有几种跳法
```c
#include<stdio.h>
int han(int n)
{
   switch (n)
   {
   case 1:
    return 1;
    break;
    case 2:
    return 2;
    break;
   default:
   return han(n-1)+han(n-2);
    break;
   }
}
int main()
{
    int n;
   scanf("%d",&n);
   printf("%d",han(n));
    return 0;
}
```
**末状态的前两种状态都只有一种可能到达末状态（n-2之后若是一步一步走，与n-1重复了）**
```c
#include<stdio.h>
int han(int n)
{
   int a=1;
   int b=2;
   int c;
   int i;
   if(n==1)
   return 1;
   if(n==2)
   return 2;
   for(i=0;i<n-2;i++)
   {
    c=a+b;
    a=b;
    b=c;
   }
   return c;
}
int main()
{
    int n;
   scanf("%d",&n);
   printf("%d",han(n));
    return 0;
}
```
## 4.汉诺塔问题
**a,b,c柱，a上面n个盘子，借助b柱将a上面所有盘子移动到c柱。且保证大下小上。**
```c
#include<stdio.h>
int i=0;
void han(char a,char b,char c,int n)
{
   if(n==1){
   printf("%c->%c\n",a,c);
   i++;
   }
   else{
   han(a,c,b,n-1);
   han(a,b,c,1);
   han(b,a,c,n-1);
   }
} 
int main()
{
    int n;
    scanf("%d",&n);
    han('a','b','c',n);
    printf("the quantity is %d",i);
    return 0;
}
```