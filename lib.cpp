#include "lib.h"

void init(char mat[10][20]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            mat[i][j] = ' ';
        }
    }
}


void init(char ar[20]){
    for(int i=0; i<20;i++){
        ar[i] = ' ';
    }
}


int ricerca(char nomi[10][20], char selezione [20]){
    int a;
    for(int i=0;i<10;i++){
        a=0;
        for(int j=0;j<20;j++){
            if(nomi[i][j] == selezione[j]){
                a++;
            } else {
            break;
            }
        }
        if (a==20) {
        return i;
        }
    }
    return -1;
}
