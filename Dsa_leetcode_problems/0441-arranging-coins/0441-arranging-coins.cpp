class Solution {
public:
    int arrangeCoins(int n) {
        int row=0;
        int CoinStart=1;
        while(CoinStart<=n){
            n-=CoinStart;
            row++;
            CoinStart++;
        }
        return row;
    }
};