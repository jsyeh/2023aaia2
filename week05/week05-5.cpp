// LeetCode 2078. Two Furthest Houses With Different Colors
// 用兩個for迴圈, 左手i, 右手j
int maxDistance(int* colors, int colorsSize) {

    int ans = 0; //迴圈前面 ans是0
    for(int i=0; i<colorsSize; i++){
        for(int j=0; j<colorsSize; j++){
            if(colors[i] != colors[j] && j-i>ans){
                ans = j-i;
            }
        }
    }
    return ans;
}