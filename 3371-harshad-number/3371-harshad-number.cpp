class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
         int temp=x;
        while(x>0){
        int ldigit=x%10;
        sum+=ldigit;
        x/=10;
        }
        return (temp % sum == 0) ? sum : -1;
    }
};