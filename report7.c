#include <stdio.h>

void sortTheScore(int array[],int size);
void printScore(int array[],int size);

void sortTheScore(int array[],int size){
    int newArray[size];
    for(int i=0;i<size;i++){
        newArray[i]=0;
    }
    for(int j=0;j<size;j++){
        int l=0;
        for(int k=0;k<size;k++){
            if(j!=k){
                if(array[j]<array[k]){
                    l++;
                }
            }
        }
        while(1){
            if(array[j]==0){
                break;
            }
            if(newArray[l]==array[j]){
                l++;
            }else{
                newArray[l]=array[j];
                break;
            }
        }
    }
    for(int m=0;m<size;m++){
        array[m]=newArray[m];
    }
}
void printScore(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main(){
    const int SIZE = 6; //定数としてのサイズを宣言                          
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};
    //処理コード
    printf("scores = ");
    printScore(scores,SIZE);
    sortTheScore(scores,SIZE);
    printf("results = ");  
    printScore(scores,SIZE);
    return 0;
}
