#include <stdio.h>

void sortTheScore(int array[],int size);
void printScore(int array[],int size);

int sortTheScore(int array[],int size){
    int newArray[size]={0};
    for(int j=0;j<size;j++){
        int l=0;
        for(int k=0;k<size;k++){
            if(j!=k){
                if(array[j]<array[k]){
                    l++;
                }
            }
        }
        newArray[l]=array[j]
    }
    for(int m=0;m<size;m++){
        array[m]=newArray[m];
    }
}
void printScore(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d",array[i]);
    }
}
int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    sortTheScore(scores,SIZE);
    printScore(scores,SIZE);
    return 0;
}
