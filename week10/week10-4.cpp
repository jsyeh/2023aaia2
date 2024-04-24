/// wee10-4.cpp 要看變數範圍 variable scope
/// 課本 Page 5-8
#include <stdio.h>
int z = 100; ///外面的 global variable 全域變數
void myFunc() { ///我的函式
    int x = 20; ///裡面的 local variable 區域變數
    printf("myFunc()裡的 x: %d z: %d\n", x, z);
    printf("在離開時, 順手把 x 和 z 都設成 0\n");
    x = 0;
    z = 0;
}

int main() ///主函式
{
    int x = 10; ///裡面的 local variable 區域變數
    printf("main()  裡的 x: %d z: %d\n", x, z);
    myFunc();
    printf("main()  裡的 x: %d z: %d\n", x, z);
}
