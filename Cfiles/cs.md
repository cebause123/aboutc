 character string
## 1.transition
### (1)
```c
int main()
{
   char arr[]="Wjat can i say";
   const char *ptr="wjat can i say";
   for(int i=0;i<6;i++)
   {
    putchar(arr[i]);
   }
   putchar('\n');
   for(int i=0;i<6;i++)
   {
    putchar(*(ptr+i));
   }
   putchar('\n');
   while((*ptr)!='\0')
   {
    putchar(*(ptr++));
   }
    return 0;
}
```
### (2)
gets()无法检查数组是否装得下输入行
```c
char arr[12];
    puts("enter a string");
    fgets(arr,12,stdin);
    puts(arr);
    fputs(arr,stdout);
    puts("enter another");
    fgets(arr,12,stdin);
    puts(arr);
    fputs(arr,stdout);
    puts("done");
```
output
>enter a string
abc de
abc de
空的
abc de
enter another
abc de a ghtch
abc de a gh
abc de a ghdone

## 2.
### (1)
```c
#include<ctype.h>
#include<stdio.h>
int main()
{
    char arr[]="I am a student";
    int i=0;
    while (arr[i])
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
### (2)
```c
#include<stdio.h>
#include<string.h>
void fit(char *str,unsigned int size)
{
    if(strlen(str)>size)
    str[size]='\0';
}
int main()
{
   char arr[]="what can u say so,get away maybe the choice";
   puts(arr);
   fit(arr,17);
   puts(arr);
   puts(arr+18);
    
    return 0;   
}
```
output
>what can u say so,get away maybe the choice
what can u say so
get away maybe the choice

## 3.
char arr[12];
    puts("enter a string");
    fgets(arr,12,stdin);
    puts(arr);
    fputs(arr,stdout);
    puts("enter another");
    fgets(arr,12,stdin);
    puts(arr);
    fputs(arr,stdout);
    puts("done");

## 4.
include<string.h>
### (0)
||长度不受限制的函数|长度受限制的函数|
|:--:|:-:|:-:|
||strcpy|strncpy|
||strcat|strncat|
||strcmp|strncmp|
### (1)strlen

```c
#include<stdio.h>
size_t my_strlen(const char*str)
{
    if(*str!='\0')
        return 1+my_strlen(str+1);
    else
        return 0;
}
int main()
{
   size_t len=my_strlen("abccd");
   printf("%zd\n",len);
    return 0;   
}
```
```c
#include<stdio.h>
#include<string.h>
int main()
{
  size_t i;
  i=strlen("abcdd");
  printf("%zd\n",i);
    return 0;
}
```
### (2)strcpy
(==strncpy指定拷贝长度，开头覆盖==)
函数将包括\0的全部字符拷贝
destination足够大，可修改（无const）
从source到desitnation 
```c
(1)char*my_strcpy(char*des,const char*sou)
{
    char*ret=des;
    while(*sou!='\0')
    {
        *des=*sou;
        des++;
        sou++;
    }
    *des=*sou;
    return ret;
}
(2)char*my_strcpy(char*des,const char*sou)
{
    char*ret=des;
    while(*des++=*sou++)//先使用再加加
        //括号里的表达式结果'q','w'的ASKM表值不为零
        //最后赋值\0过去，\0的值为0假，跳出。
    {
        ; 
    }
    return ret;
}
#include<stdio.h>  
int main()
{
    char arr1[]="qwerrt";
    char arr2[21]={0};
    char *str=my_strcpy(arr2,arr1);
    printf("%s\n",arr2);
    printf("%s\n",str);
    return 0;
}
```
```c
#include<stdio.h>  
#include<string.h>
int main()
{
    char arr1[]="abcdef";
    char arr2[20]={0};
strcpy(arr2,arr1);
printf("%s\n",arr2);
    return 0;   
}  
```
### (3)strcat
(==char*strncat(const char*str,const char*ptr,size_t n)最多追加n个,加到末尾会额外再加\0，保证仍是字符串，所以原函数不一定要加\0==)
```c
#include<string.h>
#include<stdio.h>  
int main()
{ 
    char arr1[20]="hello";
    char arr2[]="world";
    strcat(arr1,arr2);
    char*str=strcat(arr1,arr2);
    printf("%s\n",str);
    printf("%s\n",arr1);
    return 0;
}
```
```c
#include<stdio.h>  
char *my_strcat(char*des,const char*sou)
{//find\0 and strcpy
    char*ret=des;
    while (*des)
    {
       des++; /* code */
    }
    while(*des++=*sou++)
    {
        ;
    }
    return ret;
}
int main()
{ 
    char arr1[20]="hello";
    char arr2[]="world";
    char*str=my_strcat(arr1,arr2);
    printf("%s\n",str);
    printf("%s\n",arr1);
    return 0;
} 
```
### (4)strcmp(string compare)
(==int strncmp(const char*str,const char*ptr,size_t num)==)
==int== strcmp(constchar *str1,const char *str2)
```c
#include<string.h>
#include<stdio.h>  
int main()
{ 
   char arr1[]="asdfgh";
   char arr2[]="ass";
   int n=strcmp(arr1,arr2);
   printf("%d\n",n);
    return 0;
} 
```
output:-1负数
```c
#include<stdio.h>  
int my_strcmp(const char*str,const char*ptr)
{
    while(*str==*ptr)
    {
        if(*str=='\0')
        {
            return 0;
        }
        str++;
        ptr++;
    }
   (1) if(*str>*ptr)
        return 1;
    else
    return -1;
    (2)
    return *str-*ptr;
}
int main()
{ 
   char arr1[]="asdfgh";
   char arr2[]="ass";
   int n=my_strcmp(arr1,arr2);
   printf("%d\n",n);
    return 0;
} 
```
### (5)strstr
char*strstr(const char*str,const char*ptr)
ptr在str指向的字符串第一次出现的位置
```c
include<stdio.h> 
#include<string.h>
int main()
{ 
   char arr1[15]="shshogetsho";
   char arr2[]="sho";
   char *ps=strstr(arr1,arr2);
   if(ps!=NULL)
   {
   printf("%s\n",ps);
   }
   else
   {
    printf("no find\n");
   }
    return 0;
} 
```
output:shogetsho
```c
#include<stdio.h> 
char *my_strstr(const char*str1,const char*str2)
{
    const char *s1;
    const char*s2;
    const char*cp=str1;
    if (*str2=='\0')
        return (char*)str1;
    while (*cp)
    {
        s1=cp;
        s2=str2;
        while (*s1 && *s2 && *s1==*s2)
        {
            s1++;
            s2++;   
        }
        if (*s2=='\0')
        {
            return (char*)cp;
        }
        cp++;
    }
    return NULL;
}
int main()
{ 
   char arr1[15]="shshogetsho";
   char arr2[]="sho";
   char *ps=my_strstr(arr1,arr2);
   if(ps!=NULL)
   {
   printf("%s\n",ps);
   }
   else
   {
    printf("no find\n");
   }
    return 0;
} 
```
**principle**
*str1
*s1
*cp
"abbbcdef"
"bbc"
*s2
*str2 

### (6)strtok
char *strtok(char*str,const char* delim)
**后者指定的分隔符将str分割成多个，分隔符被替换为\0**
```c
#include<stdio.h> 
#include<string.h>
int main()
{ 
   char arr[]="cebause@outlook.com";
   const char*p="@.";
   char buf[20]={0};
   strncpy(buf,arr,20);
   (1)
   char* pr=strtok(buf,p);
   printf("%s\n",pr);
  pr=strtok(NULL,p);
    printf("%s\n",pr); 
    pr=strtok(NULL,p);
    printf("%s\n",pr);
    pr=strtok(NULL,p);
    printf("%s\n",pr);
    return 0;

    (2) char* pr=NULL;
  for(pr=strtok(buf,p);pr!=NULL;pr=strtok(NULL,p))
  {
    printf("%s\n",pr);
  }应该使用了static

} 
```
**两个@@中间不会隔出**
### (7)strerror
char* strerror(int errnum)
```c
#include<stdio.h> 
#include<string.h>
int main()
{ 
   for(int i=0;i<10;i++)
   printf("%d:%s\n",i,strerror(i));
     return 0;
} 
output:
0:No error
1:Operation not permitted
2:No such file or directory
3:No such process
4:Interrupted function call
5:Input/output error
6:No such device or address
7:Arg list too long
8:Exec format error
9:Bad file descriptor
```
   