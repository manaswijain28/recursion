class Solution {
public:
//t.c : 9^(9^2)
//s.c : 1
    void solveSudoku(vector<vector<char>>& board) {

        function<bool()> f = [&]()->bool{
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    int row = i;
                    int col = j;

                    if(board[i][j] == '.'){
                        for(char c = '1';c <= '9';c++){
                            bool ok = true;
                            for(int k=0;k<9;k++){
                                if(board[k][col] == c){
                                    ok = false;
                                    break;

                                }

                                if(board[row][k] == c){
                                    ok = false;
                                    break;
                                }


                                if(board[3*(row/3)+k/3][3*(col/3)+k%3] == c){
                                    ok = false;
                                    break;
                                }
                            }

                            if(ok){
                                board[i][j] = c;
                                if(f() == true){
                                    return true;
                                }
                                board[i][j] = '.';
                            }
                              
                        }

                        return false;
                    }
                }
            }

            return true;
        };

        f();

        
        
    }
};
