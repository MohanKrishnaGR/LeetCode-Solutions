bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    

    for(int i = 0; i < 9; i++){
        

        for(int j = 0; j < 9; j++){

            if(board[i][j] != '.'){

                for(int k = 0; k < 9; k++){

                    // row
                    if(board[i][k] != '.')
                    if(board[i][k] == board[i][j] && (k!=j)){ 
                        return false;
                    }

                    // col
                    if(board[k][j] != '.')
                    if(board[k][j] == board[i][j] && (k!=i)){
                        return false;
                    }

                    //grid
                    int r = 3*(i/3)+(k/3), c = 3*(j/3)+ k%3;

                    if(board[r][c] != '.')
                    if(board[r][c] == board[i][j] && r!=i && c!=j){
                        return false;
                    }
                }
            }
        }
    }
    return true;
}