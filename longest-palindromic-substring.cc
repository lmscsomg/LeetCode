class Solution{
    public:
        string longestPalindromic(string s){
            const int n = s.size();

            int maxlength = 1, start = 0;
            for(int i = 1; i < n ; i++){
                int length = 1;
                for(int j = i-1, k = i+1; j >= 0 && k <= n && s[j] == s[k]; j--, k++){
                    length += 2;
                }

                if(length > maxlength){
                    maxlength = length;
                    start = i - (length-1)/2;
                }

                if(s[i] != s[i-1])
                    continue;

                length = 2;
                for (int j = i-2, k = i+1; j >= 0 && k <=n && s[j] == s[k]; j--, k++){
                    length += 2;
                }

                if(length > maxlength){
                    maxlength = length;
                    start = i - length/2;
                }
            }
            return s.substr(start, maxlength);
        }
};
