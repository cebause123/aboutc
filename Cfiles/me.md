# memory function
## 1.memcpy
void* memcpy(void* destination,const void     *source,size_t num)
完成内存块拷贝，num个字节
**memcpy只负责拷贝不重叠的内存**
```c
#include<stdio.h>
#include<string.h>
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[20]={0};
    int sz=sizeof(arr2)/sizeof(arr2[0]);
    memcpy(arr2,arr1+2,20);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
```
output:3 4 5 6 7 0 0 ...0 0*15
```c
#include<stdio.h>
void*my_memcpy(void*des,void*sou,size_t num)
{
    void*ret=des;
    while (num--)
    {
        *(char*)des=*(char*)sou;//对应一字节size_t
        des=(char*)des+1;
        sou=(char*)sou+1;
    }
    return ret;
}
int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10};
    int arr2[20]={0};
    int sz=sizeof(arr2)/sizeof(arr2[0]);
    my_memcpy(arr2,arr1+2,20);
    for(int i=0;i<sz;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}
```
## 2.memmove
void* memmove(void* destination,const void     *source,size_t num)
**不管重不重叠**
原理如me.c

## 3.memset
void*memset(void*ptr,int value,size_t num)
**改num个字节**
num要设置的
## 4.memcmp
int memcmp(const void *ptr1,const void *ptr2,size_t num)
**num个字节**