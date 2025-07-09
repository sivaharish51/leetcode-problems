class Solution {
public:
    bool search(int i,int j,vector<vector<char>>& board, string word,int n){
        if(n==word.size()) return true;
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[n]) return false;
        char ch=board[i][j];
        board[i][j]='*';
        bool l=search(i,j-1,board,word,n+1);
        bool r=search(i,j+1,board,word,n+1);
        bool t=search(i-1,j,board,word,n+1);
        bool b=search(i+1,j,board,word,n+1);
        n--;
        board[i][j]=ch;
        return l||r||t||b;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    bool f=search(i,j,board,word,0);
                    if(f) return true;
                }
            }
        }
        return false;
    }
};