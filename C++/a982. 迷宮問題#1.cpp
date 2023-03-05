#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node{
    int x;          //x座標
    int y;          //y座標
    int step;       //步數
};

//==========<前進路線選擇>========
const int dy[4] = {-1, 0, 1, 0};    //上右下左
const int dx[4] = { 0, 1, 0,-1};

void bfs(queue<node> q, vector<vector<char>> maze, const int row, const int col, int start_y, int start_x,const int end_y, const int end_x){
    node start;
    start.x = start_x;
    start.y = start_y;
    start.step = 1;
    q.push(start);
    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int step = q.front().step;
        if(x==end_x && y==end_y){
            cout << step << endl;
            return ;
        }
        for(int k=0;k<4;k++){
            int next_x = x+dx[k];
            int next_y = y+dy[k];
            if(maze[next_y][next_x]=='.'){
                node s;
                s.x = next_x;
                s.y = next_y;
                s.step = step + 1;
                q.push(s);
                maze[next_y][next_x] = '@';
            }
        }
//        for(int y=0;y<row;y++){
//            for(int x=0;x<col;x++){
//                cout << maze[y][x] << " ";
//            }
//            cout << endl;
//        }
        q.pop();
    }
    cout << "No solution!";
    return ;
}
int main(int argc, char **argv){
    int N;
    while(cin >> N){
        queue<node> q;
        vector<vector<char>> maze(N, vector<char>(N,'\0'));
        for(int y=0;y<N;y++){
            for(int x=0;x<N;x++){
                cin >> maze[y][x];
            }
        }
        int start_y = 1;
        int start_x = 1;
        int end_y = N-2;
        int end_x = N-2;
        maze[start_y][start_x] = '@';
        bfs(q, maze, N, N, start_y, start_x, end_y, end_x);
//        for(int y=0;y<N;y++){
//            for(int x=0;x<N;x++){
//                cout << maze[y][x] << " ";
//            }
//            cout << endl;
//        }
    }
    return 0;
}
