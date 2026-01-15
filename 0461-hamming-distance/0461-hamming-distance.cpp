class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> bx(x); 
        bitset<32> by(y); 
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (bx[i] != by[i]) {
                count++;
            }
        }
        return count;
    }
};