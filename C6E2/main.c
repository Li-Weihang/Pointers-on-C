#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE 1
int del_substr(char *str, char const *substr){
    int foundFlag = FALSE;
    int length = (int)strlen(substr);
//    char const *sub = substr;
    while(*str!= '\0'){     //找到最后一个位置
        char *p = str;
        while(*substr != '\0'){
            if(*substr != *p)
                break;
            p++;
            substr++;
        }
        if(*substr == '\0'){//说明找到了
            foundFlag = TRUE;
            break;
        }
        str++;
    }//到此处str指针即指向匹配的首地址
    if(!foundFlag)
        return 0;
    printf("%c, %c\n", *str, *(str + length));
//    *str = 'F';
    while(*(str+length) != '\0'){
        printf("%c, %c\n", *str, *(str + length));
        *str = *(str + length);

        str++;
    }
    *str = '\0';
    return 1;
}

int main() {
    char str[] = "ABCDEFG";
    char * substr = "CDE";
    del_substr(str, substr);
    printf("%s", str);

    return 0;
}