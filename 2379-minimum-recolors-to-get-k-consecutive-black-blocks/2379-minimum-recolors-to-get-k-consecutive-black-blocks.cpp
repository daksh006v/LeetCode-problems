class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        string window;
        for(int i = 0; i< k; i++){
            window = window + blocks[i];
        }

        int min = INT_MAX;
        int count;
        for(int j = k-1; j<blocks.size(); j++ ){
            count = 0;

            for(int k = 0; k<window.size(); k++){
                if(window[k] == 'W'){
                    count++;
                }
            }
            if(count < min){
                min = count;
            }

            window.erase(0,1);
            window = window + blocks[j+1];
        }

        return min;
    }
};