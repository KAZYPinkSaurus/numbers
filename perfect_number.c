// 完全数を求める
#include<stdio.h>

// 参考　https://mathtrain.jp/perfectnumber
int main(){
    unsigned long i,j,k;
    unsigned long prime,tmp;
    unsigned long old_two_n=2,two_n;


    // 完全数かチェックする数i
    for(i = 2;i<32 ;i++)
    {   
        two_n=1;
        // 2^iを求める
        for (j = 1;j<=i;j++){
            two_n *= 2;
        }

        // 素数か確かめる
        prime = 1;
        tmp = two_n - 1;
        for(k=2;k<=tmp/2;k++){
            // 素数ではない
            if(tmp%k==0){
                prime = 0;
                break;
            }
        }

        // 素数の時だけ
        if(prime==1){
          printf("完全数:%lu\n",old_two_n*tmp);
        }
        old_two_n = two_n;

    }
    
}