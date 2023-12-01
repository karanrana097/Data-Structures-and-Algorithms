#include<stdio.h>
//#include<string.h>
void main()
{
    char str[5];
    char str1[20]="Hi i am Karan";
    char str2[]="Hi i am Karan Rana";
    char str3[6]={'a','b','c','d','\0'};
    
    // scanf("%s", str);
    // printf("%s",str);
    fgets(str,5,stdin);
    puts(str);
}