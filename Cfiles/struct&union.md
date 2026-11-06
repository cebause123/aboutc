## struct结构体
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
}__attribute__((packed))//不用对齐(指的是上九行)

```
在函数里面调用struct结构体
```c
#include<stdio.h>
struct abc {
    int a;
    int b;
    int c;
};
int func(struct abc *p,int arr[])
{
    printf("%d %d %d\n",p->a,p->b,(*p).c);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}
int main()
{
    int ret=0;
    struct abc c=
    {
        .a=1,
        .b=2,
        .c=3
    };
    int arr[2]={4,5};
    ret =func(&c,b);
    return 0;
 }
```


```c
#include<stdio.h>
#include<string.h>
struct person{
    char name[12];
    int age;
    void(*get_name_func)(struct person *p,char *mingzi);//no define function in struct,定义函数指针
    void(*get_age_func)(struct person *p,int *nianling);
};
    void get_name(struct person *p,char *mingzi)
    {
        strcpy(mingzi,p->name);
    }
    void get_age(struct person *p,int *nianling)
    {
        *nianling=p->age;
    }
    struct person p1={
        .name="cebause",
        .age=19,
        .get_name_func=get_name,
        .get_age_func=get_age
    };
int main(){
    char name[12]={0};
    int age=0;
    struct person *p=&p1;
    p->get_name_func(p,name);
    p->get_age_func(p,&age);
    printf("%s:%d\n",name,age);
    return 0;
}
```

## union联合体
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
## enum
**该关键字表示的类型叫枚举类型**
**内存默认选择int，超出int大小，就选择long等更大的整型类型**
**==定义整型时==可以替代 # define**
```c
#include<stdio.h>
enum abc {
    a=0,
    b=2,
    c=5,
    d
};
enum efg {
    e=0x123456789,
    //int类型有4个字节，每个字节有八位，十六进制的一位表示二进制的四位
    f,
    g
}; 
int main()
{
    printf("%d %d %d %d\n",a,b,c,d);
    printf("%zu\n",sizeof(a));
    printf("%zu\n",sizeof(enum abc));
    printf("%zu\n",sizeof(e));
    printf("%zu\n",sizeof(enum efg));e
 return 0;
 }
```
```
output:
0 2 5 6
4
4
8
8
```
## typedef
关键字，给数据类型起一个别名
`typedef 数据类型 别名`

## 修饰关键字
### 1.auto
### 2.register
`register char a;`

## volatile














