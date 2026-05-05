class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i = 0; i <= 30; i++ ){

            int ans = pow(2,i);

            if (ans == n ){
                return true;
                }
                
        }return false;
// return false is written outside for loop because
// we must check all powers of 2 before deciding
    }
};