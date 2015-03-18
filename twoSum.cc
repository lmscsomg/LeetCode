class Solution{
    public:
        vector<int> twoSum(vector<int> &numbers, int target){
            vector<int> result;
            unordered_map<int,int> valToIndex;

            for(int i = 0; i < numbers.size(); i++){
                if(valToIndex.find(numbers[i]) == valToIndex.end()){
                    valToIndex[target-numbers[i]] = i;
                }else{
                    result.push_back(valToIndex[numbers[i]]+1);
                    result.push_back(i+1);
                    break;
                }
            }
            return result;
        }
};
