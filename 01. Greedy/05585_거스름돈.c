/*
[05585번]
타로는 자주 JOI잡화점에서 물건을 산다.
JOI잡화점에는 잔돈으로 500엔, 100엔, 50엔, 10엔, 5엔, 1엔이 충분히 있고, 언제나 거스름돈 개수가 가장 적게 잔돈을 준다.
타로가 JOI잡화점에서 물건을 사고 카운터에서 1000엔 지폐를 한장 냈을 때,
받을 잔돈에 포함된 잔돈의 개수를 구하는 프로그램을 작성하시오.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int money,result ;
    scanf("%d" , &money);
    result =0;
    money = 1000 - money;

    result += money/500;
    money -= (money/500) * 500;
    
    result += money/100;
    money -= (money/100) * 100;

    result += money/50;
    money -= (money/50) * 50;
    
    result += money/10;
    money -= (money/10) * 10;

    result += money/5;
    money -= (money/5) * 5;

    result += money/1;
    money -= (money/1) * 1;

    printf("%d" , result);
    

}

