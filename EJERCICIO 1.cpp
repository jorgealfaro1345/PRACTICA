#include <iostream>

using namespace std;
int main(){
    int matriz[4][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(i==0&&j<5){
                cout<<matriz[i][j]<<";";
            }
            if(i>=0&&j==5){
                cout<<matriz[i][j]<<";";
            }
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=5;j>=0;j--){
            if(i==3&&j<5&&j>0){
                cout<<matriz[i][j]<<";";
            }
            if(i<=3&&i>0&&j==0){
                cout<<matriz[i][j]<<";";
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(i==1&&j>0&&j<5){
                cout<<matriz[i][j]<<";";
            }
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=5;j>=0;j--){
            if(i==2&&j<5&&j>0){
                cout<<matriz[i][j]<<";";
            }
        }
    }
}
