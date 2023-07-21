class Solution {
public:
    bool check(vector<vector<char>>& board, int row, int col, char ch){
        for(int j=0; j<9; j++){
            if(board[row][j] == ch) return false;
        }
        for(int i=0; i<9; i++){
            if(board[i][col] == ch) return false;
        }

        int rMin = row - (row%3);
        int cMin = col - (col%3);
        for(int i=rMin; i<rMin+3; i++){
            for(int j=cMin; j<cMin+3; j++){
                if(board[i][j] == ch) return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    for(char ch='1'; ch<='9'; ch++){
                        if(check(board,i,j,ch)){
                            board[i][j] = ch;
                            if(solve(board)) return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};