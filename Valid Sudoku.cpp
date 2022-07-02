// Problems: https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    
      
      bool isValiedCol(int rowLow, int rowHi, int colLow, int colHi,vector<vector<char>>& board){
        int isVisited[10];
  
        for(int i=colLow; i<=colHi;i++){
            
            memset(isVisited,0,sizeof(isVisited));
            
            for(int j=rowLow;j<=rowHi;j++){
                
                if(board[j][i]!='.'){
                    
                if(isVisited[board[j][i]-'0']){
                    return false;
                }
                    isVisited[board[j][i]-'0'] = 1;
                }
            }
        }
        
        return true;
    }
    
    bool isValiedRow(int rowLow, int rowHi, int colLow, int colHi,vector<vector<char>>& board){
        int isVisited[10];
        
        for(int i=rowLow; i<=rowHi;i++){
            memset(isVisited,0,sizeof(isVisited));
            
            for(int j=colLow;j<=colHi;j++){
                if(board[i][j]!='.'){
                    
                if(isVisited[board[i][j]-'0']){
                    return false;
                }
                    isVisited[board[i][j]-'0'] = 1;
                }
            }
        }
        
        return true;
    }
    
    bool isValiedSubBoard(int rowLow, int rowHi, int colLow, int colHi,vector<vector<char>>& board){
        int isVisited[10];
        memset(isVisited,0,sizeof(isVisited));
        for(int i=rowLow; i<=rowHi;i++){
            
            for(int j=colLow;j<=colHi;j++){
                
               // cout<<"ij "<<i<<" "<<j<<endl;
                if(board[i][j]!='.'){
                 if(isVisited[board[i][j]-'0']){
                    return false;
                  }
                    isVisited[board[i][j]-'0'] = 1;
                }
            }
        }
        
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int row=9,col=9;
        
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                 bool flag = isValiedSubBoard(i,i+2,j,j+2,board);
                if(flag==false){
                    return false;
                }
            }
        }
        
        
       bool flag2 =  isValiedRow(0,8,0,8,board);
        if(flag2 == false)
            return false;
        flag2 =  isValiedCol(0,8,0,8,board);
        
        return flag2;
    }
};
