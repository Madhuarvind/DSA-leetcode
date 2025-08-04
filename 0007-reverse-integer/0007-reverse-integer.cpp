class Solution {
public:
    int reverse(int x) {
        int cnt=0;
        int reverse=0;
        while(x!=0){
            if (reverse>INT_MAX/10 || reverse<INT_MIN/10) return 0;
            int lastdigit=x%10;
            cnt++;
            reverse=reverse*10+lastdigit;
            x=x/10;
        }
        return reverse;
    }
};