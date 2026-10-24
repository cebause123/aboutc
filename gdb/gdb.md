# gdb(gnu debugger)
## C
### command
```
gcc -o test test.c -g(usually first is output and the second is input)
gdb ./test
```
`(gdb) run/r`
`(gdb) break 4`**set a breakpoint in line 4,the run will stop at the breakpoint**
`(gdb) print b`**print the current varies**
`(gdb) print &b`
`(gdb) x (address)`**type the b's address,get the value**
`(gdb) x /d (address)`
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) set var b=20`**change it**
`(gdb) info break`format all breakpoints
`(gdb) info register`
`(gdb) info thread`watch the current process
`(gdb) thread 1`change to process 1 and r&n&c behind
`(gdb) `
`(gdb) run`
`(gdb) next`run one line after one line
`(gdb) continue`
`(gdb) `
`(gdb) `
`(gdb) disass`**汇编**
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `
`(gdb) `


`gcc -o test test.c -v`
`gcc -o 1.i test.c -E`(pre compile)**grammar error can't be detected in this stage**
`gcc -o 1.s test.c -S`(just till disass)
`gcc -o 1.o test.c/1.s -c`
`gcc -o test test.c`(the plain one:just to link)
```
pre compile generate .i file(replace macro)
compile .c file to generate .s file disass
generate .s file ==disass== to generate .o file
link to a executive file called test
```

#### 条件编译
`gcc -o test test.c -D DEBUG`
`gcc -o test test.c -D Max=100`
```c
#include<stdio.h>
#ifndef DEBUG
#error "do somthing to driver"
#warning "do somthing to driver"
#endif

#ifdef DEBUG
void what()
{
    printf("what\n");
}
#endif
int main()
{
    #ifdef DEBUG
    what();
    #endif
}
```
***









### preprocess
#### conditional process

#### define

##### 1.predefine
```c
#include<stdio.h> 
int main()
{
 printf("%s\n",__FILE__); //file name
 printf("%d\n",__LINE__);//current line 
 printf("%s\n",__DATE__); //today
 printf("%s\n",__TIME__); //specific time
 printf("%d\n",__STDC__); //follow ANSI C,then get 1
  return 0;
} 
```
2026/10/22
19:03:49 | 
##### 2.define const varies
#define representative represented
```c
#define MESSAGE printf("%s %d %s %s\n",\
__FILE__,\
__LINE__,\
__DATE__,\
__TIME__)
```
<mark>while define,use \ to link neighbor line</mark>
<mark>without ';' in define is recommended</mark>

**==实战可用==**
```c
#include<stdio.h>
#define LOG(x) printf("%s %s %d %s is %d\n",\
                __FUNCTION__\
                __FILE__\
                __LINE__\
                #x,x)
int main()
{
    int d1=100;
    int d2=200;
    LOG(d1);
    LOG(d2);
    return 0;
}
```
```
output:
main test.c 8 d1 is 100
main test.c 9 d2 is 200
```
##### 3.define macro
#define name(parameter-list) stuff
<mark>no space between name and parameter </mark>
```c
#include<stdio.h>
#define SQUARE(x) x*x
int main()
{
    int a=10;
    printf("%d\n",SQUARE(a));
    return 0;
}
```
<mark>use () more</mark>
==using SQUARE(x) (x)*(x)
or input SQUARE(a+2) output will be a+2*a+2=32 instead of 144==

##### 4.macro parameter with side-effect
this parameter appear more than one time
```c
int a=10;
int b=a+1;//a=10,b=11
```
```c
int a=10;
int b=++a;//a=11,b=11
```
```c
#include<stdio.h>
#define COM(x,y) ((x)>(y))?(x):(y)
int main()
{
    int a=10;
    int b=20;
    int m=COM(a++,b++);
    //m=(a++)>(b++)?(a++):(b++);
    printf("%d %d %d\n",a,b,m);
    return 0;
 }
```
`output: 11 22 21`

##### macro&function
**macro is usually used for easy calculation**
```c
#include<stdio.h>
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
int main()
{
    int*a=(int*)malloc(10*sizeof(int));
    int*b=MALLOC(10,int);
    return 0;
 }
```
<mark>type, like int and short ,can appear in macro, but can't appear in function</mark>
<mark>macro can't do recursion or debugging</mark>

#### #&##

##### 1.#
```c
#include<stdio.h>
#define PRINT(val,format) printf("the value of %s is " format "\n",#val,val)
#define PRINT(val,format) printf("the value of " #val " is " format "\n",val)
int main()
{
    int a=10;
    PRINT(a,"%d");
    float fl =3.4f;
    PRINT(fl,"%.2f");
    return 0;
 }
```
two ways to define 
`#val=="val" in PRINT`

***
##### 2.##
```c
#include<stdio.h>
#define GENERATE_MAX(type) type max_##type(type x,type y)\
{\
    return x>y?x:y;\
}
GENERATE_MAX(char)
GENERATE_MAX(int)
int main()
{
    int a=10;
    int b=20;
    printf("%d\n",max_int(a,b));

    return 0;
 } 
```

#### common command of preprocess

#undef NAME:cancel the define of the macro
```c
#define OK 10
#undef OK
#define OK 11
```

```c
#ifndef HEAD_NAME
#define HEAD_NAME
#endif
```
```c
#ifdef condition1
//code1
#elsif condition2
//code2
#else
//code3
#endif
```








