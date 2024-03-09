#include <stdlib.h>
#include <stdio.h>

int main(){
    int* ar1=malloc(9*sizeof(int));
    int* ar2=malloc(9*sizeof(int));

    ar1[0]=97;
    ar1[1]=16;
    ar1[2]=45;
    ar1[3]=63;
    ar1[4]=13;
    ar1[5]=22;
    ar1[6]=7;
    ar1[7]=58;
    ar1[8]=72;

    ar2[0]=90;
    ar2[1]=80;
    ar2[2]=70;
    ar2[3]=60;
    ar2[4]=50;
    ar2[5]=40;
    ar2[6]=30;
    ar2[7]=20;
    ar2[8]=10;

    for(int i=0;i<8;i++){
        int count=0;
        int temp=ar1[i];
        for(int j=0;j<(8-i);j++){
            if(ar1[j]>ar1[j+1]){
            int temp2=ar1[j];
            ar1[j]=ar1[j+1];
            ar1[j+1]=temp2;
            count++;
        }
        }
        printf("%s%d%s%d","Total number of swaps for ",temp," is ",count);
        printf("\n");
    }
    for(int i=0;i<8;i++){
        printf("%d%s",ar1[i]," ");
    }
    printf("\n");

    int minInd;
    for(int i=0; i<8;i++){
        minInd=i;
        int count=0;
        int temp=ar2[i];
        for(int j=i+1;j<9;j++){
            if(ar2[j]<ar2[minInd]){
                minInd=j;
            }
        }
        if(i!=minInd){
            ar2[i]=ar2[minInd];
            ar2[minInd]=temp;
            count++;
        }
        printf("%s%d%s%d","Total number of swaps for ",temp," is ",count);
        printf("\n");
    }
    for(int i=0;i<8;i++){
        printf("%d%s",ar2[i]," ");
    }
}