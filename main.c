#include<stdio.h>

int main(void){
    int i = 10;
    printf("hello\n");
    char str[] = "hello";
    printf("str[]の文字は:%s\n",str);
    printf("文字列の長さ: %zu\n", strlen(str));
    return 0;
}