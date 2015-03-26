class Solution{
    public:
        bool isPalindrome(int x){
            if(x < 0)
                return false;
            if(x < 10)
                return true;

            int fac = 1;
            while(x/10 >= fac)
                fac *= 10;

            while(fac >= 10){
                int high = x/fac;
                int low = x%10;
                if(high != low)
                    return false;
                x = (x%fac)/10;
                fac /= 100;
            }

            return true;
        }
};
