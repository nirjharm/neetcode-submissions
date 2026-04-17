class Solution {
public:

    int search(vector<int>& nums, int target) {
        int l = 0; 
        int r = nums.size() - 1;
        while(l <= r)
        {
            
            int m = (l+r)/2;
            if (nums[m] < target)
                l = m+1;
            else if(nums[m] > target)
                r = m-1;
            else
                return m;
        }
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0; 
        int r = matrix.size() - 1;
        while(l <= r)
        {
            
            int m = (l+r)/2;
            if (matrix[m][0] < target)
                l = m+1;
            else if(matrix[m][0] > target)
                r = m-1;
            else
                return true;
        }
         
        if(l == 0)
            return false;

        int i = search(matrix[l-1], target);

        if (i == -1)
            return false;
        return true;
    }
};
