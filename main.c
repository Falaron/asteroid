#include "Headers/glob.h"

void startGame(){
    for(int x; x < SIZE_X+1; x++){
        for(int y; y < SIZE_Y; y++){
            if(x==0 && y==0){
                GAME[x][y] = ">";
            }else{
                GAME[x][y] = " ";
            }
        }
    }
}

void draw(){
    for(int x; x < SIZE_X+1; x++){
        for(int y; y < SIZE_Y; y++){
            if(x==1){
                printf("%d", y);
            }else{
                printf("%s", GAME[x][y]);
            }
        }
    }
}

int getKey(void){
    int ch;
    ch = getch();
    if(ch == KEY_LEFT)
        printw("Left arrow is pressed\n");
    return 1;
}


int main(void){
    startGame();
    draw();
    getKey();
    return 1;
}