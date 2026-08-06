 vector<int> getRow(int rowIndex) {
    int row = rowIndex+1;
    long long ans = 1;
    vector<int> ans_row;
    ans_row.push_back(ans);
    for(int col=1;col<row;col++){
        ans = ans*(row-col);
        ans = ans/(col);
        ans_row.push_back(ans);
    }
    return ans_row;
    }



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> ans ;
        for(int i=0;i<numRows;i++){
            ans.push_back(getRow(i));
        }
        return ans;
    }
};
