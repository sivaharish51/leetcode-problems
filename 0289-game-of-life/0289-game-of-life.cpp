class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int c=0;
                for(int a=-1;a<=1;a++){
                    for(int b=-1;b<=1;b++){
                        int x=i+a;
                        int y=j+b;
                        if((a!=0 ||b!=0)&&x>=0&&y>=0 &&x<n&&y<m&&(board[x][y]==1 || board[x][y]==3)){
                            c++;
                        }
                    }
                }
                if(board[i][j]==1 &&(c<2 || c>3)){
                    board[i][j]=3;
                }
                else if(board[i][j]==0 && c==3){
                    board[i][j]=4;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==3) board[i][j]=0;
                else if(board[i][j]==4) board[i][j]=1;
            }
        }
    }
};