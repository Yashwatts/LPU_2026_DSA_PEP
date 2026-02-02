#include <iostream>
using namespace std;

void wavePrint(int arr[][4]){
    for(int i=0; i<4; i++){
        if(i % 2 == 0){
        for(int j=0; j<4; j++){
            cout << arr[j][i] << " ";
        }
    } else{
        for(int j=3; j>=0; j--){
            cout << arr[j][i] << " ";
        }
    }
    }
}

void spiralPrint(int arr[][4] , int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        // Print Top Row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Print Right Column
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Print Bottom Row
        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        // Print Left Column
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
}

int main(){
    int arr[4][4] = {{1, 7, 14, 6}, {11, 15, 5, 10}, {2, 4, 16, 3}, {9, 13, 8, 12}};
    // wavePrint(arr);
    spiralPrint(arr, 4, 4);
}