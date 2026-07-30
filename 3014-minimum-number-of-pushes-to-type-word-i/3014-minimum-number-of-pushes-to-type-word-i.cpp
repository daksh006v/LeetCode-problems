class Solution {
public:
    int minimumPushes(string word) {
       // dont look at the numpads that they have provided, it really depends on your mapping
       // the basic logic is there are only 8 main keys that contains alphabets, so for every first 8 keys we will count the key presses as 1 only and then after we will count the presses as 2 presses, and after 8+8+8 ones it will be 3 key presses and etc

      int ans = 0;

    for (int i = 0; i < word.length(); i++) {
        if (i < 8)
            ans += 1;
        else if (i < 16)
            ans += 2;
        else if (i < 24)
            ans += 3;
        else
            ans += 4;
}

    return ans;
    }
};