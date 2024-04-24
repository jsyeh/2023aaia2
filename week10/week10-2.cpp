/// week10-2.cpp
/// 課本第5章 函式/函數 function
/// 課本 Page 5-4
#include <stdio.h>
int myAdd(int a, int b) {
    return a + b;
}
int main()
{ ///主要的函式 main()
    int ans = myAdd(2, 3);
    printf("ans: %d\n", ans);
}
