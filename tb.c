#include<stdio.h>
void func(char *c1,char *c2){
    while(*c1!='\0'){
        if(((*c1>='0'&&*c1<='9')||(*c1>='a'&&*c1<='z'))){
            *c2=*c1;
            c2++;
           } 
        c1++;
    }
    *c2='\0';
}
int main(){
    char ca[]="Ac_(db1E)2";
    char cb[20];
    func(ca,cb);
    printf("%s",cb);
    return 0;
}