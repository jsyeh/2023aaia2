// 要把word裡, ch 字母(包含)之前的字,反過來。
// 這題的關鍵, 是先找到 ch 在 word 裡是第幾個位置。
char* reversePrefix(char* word, char ch) {
    for(int i=0; word[i]!=0; i++) {
        if(word[i]==ch) {  // 找到 ch 所在的位置
            for(int k=0; k<=i/2; k++) {  // 只要迴圈做一半即可全部反過來。
                int temp = word[k];  // 把前面反過
                word[k] = word[i-k];
                word[i-k] = temp;
            }
            break; //做完,就離開迴圈
        }
    }
    return word;
}
