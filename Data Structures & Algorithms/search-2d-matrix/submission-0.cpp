class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int col = matrix[0].size();

        int len = (rows * col);
        int i = 0;
        int j = len-1;

        while(i <= j) {
            int mid = (i + j)/2;
            int midRow = mid/col;
            int midCol = mid%col;

            int el = matrix[midRow][midCol];
            if(target == el) return true;
            if(el < target) i = mid+1;
            else j = mid - 1;
        }
        return false;

        
    }
};
