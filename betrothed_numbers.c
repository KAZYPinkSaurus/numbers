// 婚約数を求める(少しズルしてる)
#include<stdio.h>

int main(){
    int i,j,k;
    int sum_1,sum_2;
    int count=0;
    
    for(i=48;i<230000;i++){
        
        sum_1=0;

        // 約数の和を取る(1は除く)
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                sum_1+=j;
            }
        }

        // 素数の時
        if(sum_1 ==0){
            continue;
        }
        
        sum_2 =0;
        // 約数の和の約数の和を求める
        for(k=2;k<=sum_1/2;k++){
            if(sum_1%k==0){
                sum_2+=k;
            }
        }

        if(i==sum_2){
            count++;
            printf("婚約数%d:(%d,%d)\n",count,i,sum_1);
            // ズルイ．．．．
            i = sum_1;
        }
    }



}