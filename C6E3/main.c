#include <stdio.h>
#include <stdlib.h>

void reverse_string(char *string){
    char *end = string;
    while(*end != '\0')
        end++;
    end--;
    while(end > string){
        char temp = *end;
        *end-- = *string;
        *string++ = temp;
        //string++;
        //end--;
    }
}

int main() {
    char str[] = "hello world";
    printf("%s\n", str);
    reverse_string(str);
    printf("%s\n", str);

    return 0;

}