class Solution {
public:
    bool Qposs(int row,int col,vector<string>&board,int n){
        bool flag=true;
        int i=0;
        int j=col;
        while(i<n && flag){
           if(board[i][j]=='Q'){
            return false;
           } 
           i++;
        }
        i=row;
        j=0;
        while(j<n && flag){
            if(board[i][j]=='Q'){
            return false;
            }
            j++;
        }
        i=row;
        j=col;
       
        while(i>=0 && j<n && flag){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j++;
        }
        i=row;
        j=col;
        while(i>=0 && j>=0 && flag){
            if(board[i][j]=='Q'){
               return false;
            }
            i--;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j>=0 && flag){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        i=row;
        j=col;
        while(i<n && j<n && flag){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j++;
        }

        return true;

        
        
    }
    void solve(int col,int n,vector<string>& board,vector<vector<string>> &ans){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(Qposs(row,col,board,n)==true){
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s;
        for(int i=0;i<n;i++){
            s+=\.\;
        }

        vector<string> board(n,s);
        solve(0,n,board,ans);
    
        return ans;
    }
};