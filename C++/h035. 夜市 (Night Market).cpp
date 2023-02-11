#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv){
    int *game = new int[9];
    bool *score = new bool[9];
    for(int x=0;x<9;x++){
        game[x] = 0;
        score[x] = false;
    }
    int try_time = 0;
    int ball = 0;
    int sum = 0;
    bool win = false;
    int cnt = 0;
    cin >> try_time;
    while(try_time--){
        cin >> ball;
        for(int x=0;x<9;x++){
            if(game[x]>0){
                game[x] -= 1;
            }
        }
        if(ball>0){
            if(game[ball-1]==0){
                if(score[ball-1]==false){
                    sum += ball;
                    score[ball-1] = true;
                }
                game[ball-1] = 12;
            }
        }
        if(!win){
            cnt = 0;
            for(int x=0;x<9;x++){
                if(game[x]>0){
                    cnt += 1;
                }
            }
            if(cnt==9){
                win = true;
            }
        }
    }



    if(win){
        cout << "perfect" << endl;
    }
    else{
        cout << sum << endl;
    }
    delete [] game;
    return 0;
}
