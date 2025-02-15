class Solution {
public:
    set<int> cols, negDiag, posDiag;
   void backtrack(int n, int row, vector<vector<string>> &res, vector<string>&board)
    {
        if(row == n)
        {
            res.push_back(board);
            return;
        }
        for(int col = 0 ; col < n ; col++)
        {
            if(cols.count(col) == 1 or negDiag.count(row-col) or posDiag.count(row+col))
            {
                continue;
            }
            cols.insert(col);
            negDiag.insert(row-col);
            posDiag.insert(row+col);
            board[row][col] = 'Q';

            backtrack(n,row+1,res,board);

            cols.erase(col);
            negDiag.erase(row-col);
            posDiag.erase(row+col);
            board[row][col] = '.';
        }
    }
    

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n,string(n, '.'));
        backtrack(n,0,res,board);
        return res;
    }
    
};