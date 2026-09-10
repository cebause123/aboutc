# pointer
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