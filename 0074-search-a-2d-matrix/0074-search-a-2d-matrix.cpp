class Solution {
public:
bool searchRow(vector<vector<int>>& matrix, int target,int row){
int n=matrix[0].size();
int st=0 ; int en=n-1;
while(st<=en){
int mid=st + (en-st)/2;
if(target==matrix[row][mid]){return true;}
else if(target<matrix[row][mid]){ en=mid-1;}
else st=mid+1;
}return false;
}

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size() ;
        int n=matrix[0].size();

        int start=0 ; int end =m-1;
        while(start<=end){
            int mid=start + (end-start)/2;
            if(matrix[mid][0]<=target && target<=matrix[mid][n-1]){
                //element found apply binary search on this appropriate row
                return searchRow(matrix,target,mid);
            }
            else if(matrix[mid][n-1]<target){
                //dowmward
                start=mid+1;
            }
            else end=mid-1;
            //upwaed
        }return false;
    }
};