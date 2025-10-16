#include<stdio.h>
void printBoard(int arr[3][3]){
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(arr[i][j] == 88 || arr[i][j] == 79){
                printf("%c  ",arr[i][j]);
            }
            else{
                printf("%d  ",arr[i][j]);
            }
        }
        printf("\n");
    }
}
