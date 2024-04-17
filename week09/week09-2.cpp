/// week09-2.cpp 比較 gets() 和 scanf()
/// 要了解字串與陣列的關係
#include <stdio.h>
int main()
{
    char line[80]; ///老師喜歡用一行字讀進來
    printf("請輸入一行英文,有空格沒關係:\n");
    gets(line); /// 課本 6-16頁
    printf("這行字是:%s\n", line);

    printf("請再輸入一行英文:\n");
    scanf("%s", line); ///課本 6-16頁, 空格斷開
    printf("這行字是:%s\n", line);
}
