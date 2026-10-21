# pointer
## <span style="color:red">0.base</span>
```c
include<stdio.h>
int a=12;
int b=23;
void func(int *p)
{
  *p=a;//结果是12
  //p是func的形参，可通过*p访问func函数外的数据
  //我认为该语句意思是p指针指向a的地址，
  //但和下面的不同，可以改变str指针的走向
  //p=&a;结果是23，
}
int main()
{
  int *str=&b;
  func(str);
  printf("%d",*str);
  return 0;
}
```
**对下面代码的解释：str是一个指向占四位的数据i的指针，而ps和pc分别是指向该数据低位两位和一位的指针。通过改变pc指针指向的i值最低位，即最低位变为00000101。可以看到，引起的i变化，导致了str和ps指针解引用的变化**
```c
#include<stdio.h>
int main()
{
  int i=65866,*str=&i;
  char *pc=(char*)&i;
  short *ps=(short*)&i;
  printf("%d %c %d\n",*str,*pc,*ps);
  //65866 J 330
  *pc=5;
  
  printf("%d %d %d\n",*str,*pc,*ps);
  //65797 5 261
  return 0;
}
```
## 1.exchange
```c
#include<stdio.h>
void ptr(int *u,int*v)
{
    int tem;
    tem=*u;
    *u=*v;
    *v=tem;
}
int main()
{
    int x=3;
    int y=7;
    printf("first x=%d y=%d\n",x,y);
    ptr(&x, &y);
    printf("now %d %d\n",x,y);
    return 0;
}
```
基本一样
```c
#include<stdio.h>

void swap(int*p1,int*p2)
{
  int p;
  p=*p2;
  *p2=*p1;
  *p1=p;

}
int main()
{
  int a,b;
  int *str,*std;
  str=&a;
  std=&b;
  scanf("%d %d",&a,&b);
  if(a<b){
  swap(str,std);
  }
  printf("max%d,min%d\n",*str,*std); 
  return 0;
}
```
==notice:better not write:
int i=10;
int * str;
*str=i;==
**把数字i写入野指针str**
==instead:
str=&i;==
**让str指针指向i**
## 2.array&pointer
>date+2==&date[2]
*(date+2)==date[2]

```c
#include<stdio.h>
int lac(int *ptr,int *pin)
{
    int total=0;
    while(ptr<pin)
    {
        total+=*ptr;
        ptr++;
    }
    return total;
}
int main()
{
    int ar[10]={3,4,5,6,7,8,9};
    int ch;
    ch=lac(ar,ar+5);
    printf("%d",ch);
    return 0;
}
```
>output 25
```c
#include<stdio.h>
int main()
{
    int lac[2]={100,200};
    int lal[2]={300,400};
    int *ptr,*pin,*poi;
    ptr=lac;
    pin=lac;
    poi=lal;
    printf("*ptr=%d     *pin=%d     *poi=%d\n",*ptr,*pin,*poi);
    printf("*ptr++=%d *++pin=%d (*poi)++=%d\n",*ptr++,*++pin,(*poi)++);
    printf("*ptr=%d     *pin=%d     *poi=%d\n",*ptr,*pin,*poi);
    return 0;
}
```

```c
#include<stdio.h>
#include<ctype.h>
int main()
{
   char arr[]="WHatever you go";
   int i=0;
   while (arr[i]!='\0')
   {
    if(islower(arr[i]))
    {
        arr[i]-=32;
    }
    printf("%c",arr[i]);
    i++;
   }
    return 0;
}
```
## 3.multiarray&pointer
int lac[4][2];
||lac[0]|lac|
|:--:|:-:|:--:|
||是占用一个int大小的地址| 是占用两个int大小的地址|
|*|存储在lac[0][0]的值|*(&lac[0])=lac[0]=&lac[0][0]，lac[0][0]的地址 |