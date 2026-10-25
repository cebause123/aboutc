# struct结构体
```c
#include<stdio.h>
struct ceb {
    char a;
    char b;
    int c;
};
struct aus {
    char aa;
    int bb;
    char cc;
};
int main()
{
    struct ceb pr ={
        .a=10,
        .b='s'
    };
    printf("%d %c\n",pr.a,pr.b);
    printf("%zu %zu\n",sizeof(struct aus),sizeof(struct ceb));//12 8 字节对齐，四位四位地读
    return 0;
 }
```

```c
struct abc {
    int a;
    char b;
}__attribute__((packed))//不用对齐
```

# union联合体
<mark>共享一份内存空间和内存首地址，并且以最大数据类型作为分配空间</mark>
```c
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
```





