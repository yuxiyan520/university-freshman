#include<stdio.h>
int a;
int main(){
    while (scanf("%d",&a)!= EOF){
        int tmp =a ,ans = 0;
        for (int i = 2 ;i*i <= a ;i ++ ){
            if (tmp%i==0){
                ans ++;
                while (tmp%i==0){
                    tmp/= i;
                }
            }
        }
        printf("%d\n", ans+1-1/tmp);
    }
    return 0;
}
