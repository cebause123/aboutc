#include<stdio.h>
#define PRINT(val,format) printf("the value of %s is " format "\n",#val,val)
int main()
{
    int a=10;
    PRINT(a,"%d");
    float fl =3.4f;
    PRINT(fl,"%.2f");
    return 0;
 }