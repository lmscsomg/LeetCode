class Solution{
    public:
        string convert(string s, int nRows){
            //pay attention to the specific situation
            const int n = s.size();
            if(n<=nRows || nRow ==1)
                return s;

            const int gap = (nRows-1)*2;
            string result;

            for(int i = 0; i < nRows; i++)
                for(int j = i; j < n; j+=gap){
                    result.push_back(s[j]);
                    if(0 < j && j < nRows-1 && j+gap-2*i < n)
                        result.pusht_back(s[j+gap-2*i]);
                }
            return result;
        }
};
