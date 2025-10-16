#include<stdio.h>
void update(int arr[3][3],int x,char c){
    if(c == 'A'){
        switch(x){
        case 1 : {arr[0][0] = 'X';break;}
        case 2 : {arr[0][1] = 'X';break;}
        case 3 : {arr[0][2] = 'X';break;}
        case 4 : {arr[1][0] = 'X';break;}
        case 5 : {arr[1][1] = 'X';break;}
        case 6 : {arr[1][2] = 'X';break;}
        case 7 : {arr[2][0] = 'X';break;}
        case 8 : {arr[2][1] = 'X';break;}
        case 9 : {arr[2][2] = 'X';break;}
    }
    }
    else{
        switch(x){
        case 1 : {arr[0][0] = 'O';break;}
        case 2 : {arr[0][1] = 'O';break;}
        case 3 : {arr[0][2] = 'O';break;}
        case 4 : {arr[1][0] = 'O';break;}
        case 5 : {arr[1][1] = 'O';break;}
        case 6 : {arr[1][2] = 'O';break;}
        case 7 : {arr[2][0] = 'O';break;}
        case 8 : {arr[2][1] = 'O';break;}
        case 9 : {arr[2][2] = 'O';break;}
    }
    }
}