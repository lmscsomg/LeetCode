class Solution{
    public:
        int reverse(int x){
            if(x < 0){
                return x < INT_MIN ? 0 : -reverse(-x);
            }

            int result = 0;
            while(x > 0){
                if(result > INT_MAX/10)
                    return 0;
                if(return == INT_MAX/10 && (x%10) > 7)
                    return 0;

                result = result*10 + x%10;
                x/=10;
            }
            return result;
        }
};
