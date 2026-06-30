bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int clms = matrix[0].size();
        int rws = matrix.size();

        int low = 0,high = clms-1;

        int index = 0 ;

        if(target<matrix[0][0] || target>matrix[rws-1][clms-1]) return false;

        for(int i = 0;i<rws; i++){

            if(target>=matrix[i][0] && target<=matrix[i][clms-1]) {
                index = i;
                break;
            }
        }
        
        while(low<=high){

            int mid = (low+high)/2;

            if(matrix[index][mid] == target) return true ;

            else if(matrix[index][mid]>target) high = mid-1;

            else low = mid+1;
        }
        
        return false;
    }