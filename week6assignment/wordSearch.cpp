bool help(int row , int col ,int wordidx , vector<vector<char>>& board, string word ){
       if(wordidx == word.size()) return true;
       
       if(row<0||col<0||row>=board.size()||col>=board[0].size()) return false ;
       if(board[row][col] != word[wordidx]) return false ;

       char temp = board[row][col];
       board[row][col] = '$';

       if(help(row+1,col,wordidx+1,board,word) || help(row-1,col,wordidx+1,board,word) || 
          help(row,col+1,wordidx+1,board,word) || help(row,col-1,wordidx+1,board,word)) return true;

       board[row][col] = temp;

       return false;
   }
   
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0 ;i<board.size() ; i++){
            for (int j= 0;j<board[0].size() ; j++){
                if(board[i][j] == word[0] ) {
                    if(help(i,j,0,board,word)) return true;
                }
            }
        }  
         return false;
    }
