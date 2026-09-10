## 1.
```c
#include<stdio.h>
int main()
{
    int sq;
    int cans;
    while(scanf("%d",&sq)==1)
    {
        cans=sq/50;
        cans+=(sq%50==0)?0:1;
     printf("You need %d %s.\n",cans,(cans==1)?"can":"cans");
     printf("enter q to quit\n");
    }
    return 0;
}
```
>output
4
You need 1 can.
enter q to quit
102 
You need 3 cans.
enter q to quit
q

## 2.
```c
#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("please enter an integer.enter q to quit\n");
    unsigned long num;
    unsigned long div;
    bool is;
    while(scanf("%lu",&num)==1)
    {
        for(div=2,is=true;div*div<=num;div++)
        {
            if(num%div==0&&num!=div*div)
            {
                printf("%lu can be divided by %lu and %lu\n",num,div,num/div);
            }
            else if(num==div*div)
            {
                printf("%lu can be divide by %lu",num,div);
            }
            is=false;
        }
        if(is)
        {
            printf("the integer is an isprime\n");
        }
        printf("please enter another integer,or enter q to quit\n");
    }
    return 0;
}
```
## 3.
```c
#include<stdio.h>
#include<stdbool.h>
#define STOP '|'
int main()
{
bool inword=false;
int ch;
int cha=0;
int words=0;
int lines=0;
    while((ch=getchsr())!=STOP)
    {
        if(ch!='\n')
        {
            if(ch!=' '&&!inword)
            {
                inword=true;
                words++;
            }
            if(ch!=' '&&inword)
            {
                cha++;
            }
            if(ch==' ')
            {
                inword=false;
            }
        }
        else if(ch=='\n')
        {
            lines++;
            inword=false;
        }
    }
    printf("this passage has %d words,%d character and %d lines\n",words,cha,lines);
    return 0;
}
```