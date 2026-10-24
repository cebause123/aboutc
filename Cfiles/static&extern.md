# 一.static
## 1.作用
- 修饰局部变量
- 修饰全局变量，==可以跨文件使用==
- 修饰函数
```c
#include<stdio.h>
void test()
{
    static int n=10;
    n++;
    printf("%d",n);
}
int main()
{
    int i=0;
    for(i=0;i<5;i++)
    {
        test();
    }
    return 0;
}
```
**没有static，输出1111111111
static==延长生命周期（作用域不变）==，调用test函数时保留上一次的n值，输出1112131415**
本来一个局部变量存储在内存的栈区，被static修饰后存储到了静态区，而存储在静态区的变量和全局变量一样
## 2.static修饰函数

# 二.extern
## 1.用来声明外部符号
### (1)
>add.c
>>int a=1**全局变量**;

>test.c
>>extern int a;
int main()
{
    printf("%d",a);
    return 0;
}
### (2)static修饰后只能在所在源文件中使用
>add.c
>>static int a=1**全局变量**;

>test.c
>>extern int a;
int main()
{
    printf("%d",a);
    return 0;
}

**报错**

# 三、内存
- 栈区：局部变量，函数参数
- 堆区：动态内存管理malloc,calloc
- 静态区：全局变量，静态变量


## 动态分配内存
>malloc
>>return void ,so usually use (int*)mallaoc


```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int*)malloc(4*sizeof(int));
    p[0]=12;
    p[1]=3;
    printf("%d\n",p[0]+p[1]);
    free(p);
    return 0;
}
```

```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*p;
    int num,i;
    int sum=0;
    printf("enter the quatity""you wanna enter");
    scanf("%d",&num);
    p=(int*)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        scanf("%d",p+i);
        sum+=p[i];
    }
    printf("average is %d",sum/num);
    free(p);
    return 0;
}
```

