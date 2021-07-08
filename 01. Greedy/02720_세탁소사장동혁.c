
/*
[02720번]
거스름돈의 액수가 주어지면 리암이 줘야할 쿼터(Quarter, $0.25)의 개수, 
다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)의 개수를 구하는 프로그램을 작성하시오. 
거스름돈은 항상 $5.00 이하이고, 손님이 받는 동전의 개수를 최소로 하려고 한다. 
예를 들어, $1.24를 거슬러 주어야 한다면, 손님은 4쿼터, 2다임, 0니켈, 4페니를 받게 된다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n,count;
    scanf("%d", &n);
    int arr[n][5];
    
    for(int i=0;i<n;i++){
        count =0;
        scanf("%d" ,&arr[i][0] );

        int tmp = arr[i][0];

        arr[i][1] = tmp/25;
        tmp -= 25*arr[i][1];

        arr[i][2] = tmp/10;
        tmp -= 10*arr[i][2];

        arr[i][3] = tmp/5;
        tmp -= 5*arr[i][3];

        arr[i][4] = tmp/1;
        tmp -= 1*arr[i][4];

    }

    for(int i=0;i<n;i++){
        for(int j=1;j<5;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}