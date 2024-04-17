///week09-4.cpp 字串的函式 課本 Page 4-8
#include <stdio.h>
#include <string.h> ///要使用「字串的函式」
int main()
{
    char line[100]; ///可放100個字母,很長
    printf("請輸入一堆字母,不要有空格,最後跳行結束輸入\n");
    scanf("%s", line);

    int N = strlen(line); ///查出字串長度 string length
    printf("字串的長度是:%d\n", N);
    ///下面用寫註解的就好了
    ///strcpy(a, "Hello");  字串拷貝 string copy
    ///strcat(a, b); 字串結合 把右邊b 接到左邊a的後面 string concatenate
    ///strcmp(a, b); 字串比較(逐字母比較,看誰比較大 string compare
}
