class Solution{
    public:
        int lengthOfLongestSubstring(string s){
            const int MAX_CHARS = 256;
            int pos[MAX_CHARS];
            memset(pos, -1, sizeof(pos));

            //last: the last position of the repeating char
            //pos: the position of the current char
            int last = -1, result = 0;
            for(int i = 0; i < s.size(); i++){
                char c = s[i];
                if(pos[c] > last){
                    last = pos[c];
                }
                pos[c] = i;
                result = max(result, i - last);
            }
            return result;
        }
};

