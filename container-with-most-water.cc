class Solution{
    public:
        int maxArea(vector<int> &height){
            int result = 0;

            int left = 0, right = height.size()-1;
            while(left < right){
                int tempArea = 0;
                if(height[left] <= height[right]){
                    tempArea = (right - left)*height[left];
                    left++;
                }else{
                    tempArea = (right - left)*height[right];
                    right--;
                }

                if(tempArea > result)
                    result = tempArea;
            }

            return result;
        }
};
