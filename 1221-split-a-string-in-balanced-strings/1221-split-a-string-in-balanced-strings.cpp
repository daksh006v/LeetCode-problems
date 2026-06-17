class Solution {
public:
    int balancedStringSplit(string s) {
        int lCount=0,rCount=0,maxStr=0;
        for(int c:s){
            if(c=='R'){
                lCount++;
            }
            else{
                rCount++;
            }
            if(lCount==rCount){
                maxStr++;
            }
        }
        return maxStr;
    }
};