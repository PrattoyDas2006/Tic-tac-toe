#include<stdio.h>
#include"functions.h"
int main(){
    int flag = 0,cnt = 0,i=0,flg=0;
    int board[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int check[9];
    printf("The Board looks like this.\n");
    printBoard(board);
    printf("To select a box press it's corresponding number.\nPlayer A goes first with X then Player B with O.\n");
    while(flag == 0){
        int a;
        cnt++;
        printf("Player A's turn:\n");
        scanf("%d",&a);
        if(a<1 || a>9){
            while(a<1 || a>9){
                printf("Invalid Input! Press again with valid Input.\n");
                scanf("%d",&a);
            }
        }
        check[i] = a;
        for(int k=0;k<i;k++){
            if(check[k]==check[i]){
                flg=1;
                break;
            }
        }
        if(flg==1){
            while(flg == 1){
                printf("Invalid Input! Press again with valid Input.\n");
                scanf("%d",&a);
                check[i] = a;
                for(int k=0;k<i;k++){
                    if(check[k]==check[i]){
                        flg = 1;
                        break;
                    }
                    else{
                        flg = 0;
                    }
                }
            }   
        }
        i++;
        update(board,a,'A');
        printBoard(board);
        flag = winCheck(board,'A');
        if(flag == 1){
            break;
        }
        cnt++;
        if(cnt>9){
            printf("Match drawn!\n");
            return 0;
        }
        printf("Player B's turn:\n");
        scanf("%d",&a);
        if(a<1 || a>9){
            while(a<1 || a>9){
                printf("Invalid Input! Press again with valid Input.\n");
                scanf("%d",&a);
            }
        }
        check[i] = a;
        for(int k=0;k<i;k++){
            if(check[k]==check[i]){
                flg=1;
                break;
            }
        }
        if(flg==1){
            while(flg == 1){
                printf("Invalid Input! Press again with valid Input.\n");
                scanf("%d",&a);
                check[i] = a;
                for(int k=0;k<i;k++){
                    if(check[k]==check[i]){
                        flg = 1;
                        break;
                    }
                    else{
                        flg = 0;
                    }
                }
            }
        }
        i++;
        update(board,a,'B');
        printBoard(board);
        flag = winCheck(board,'B');
    }
    if(flag == 1){
        printf("Player A wins.\n");
    }
    else{
        printf("Player B wins.\n");
    }
    return 0;
}