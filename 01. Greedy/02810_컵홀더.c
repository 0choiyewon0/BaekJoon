/*
[02810번]
극장의 한 줄에는 자리가 N개가 있다. 서로 인접한 좌석 사이에는 컵홀더가 하나씩 있고, 양 끝 좌석에는 컵홀더가 하나씩 더 있다. 
또, 이 극장에는 커플석이 있다. 커플석 사이에는 컵홀더가 없다.

극장의 한 줄의 정보가 주어진다. 이때, 이 줄에 사람들이 모두 앉았을 때, 컵홀더에 컵을 꽂을 수 있는 최대 사람의 수를 구하는 프로그램을 작성하시오. 
모든 사람은 컵을 한 개만 들고 있고, 자신의 좌석의 양 옆에 있는 컵홀더에만 컵을 꽂을 수 있다.
*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996);

int main(void){

    int n,s,l,blank,result;
    char arr[50];
    result =s=l=0;

    scanf("%d", &n);
    scanf("%s", arr);
    getchar();

    for(int i=0; i<n;i++){
        if(arr[i] == 'S'){
            s++;
        }else{
            l++;
        }
    }
    blank = ((l/2)+s)+1;    
    if(blank>=(s+l)){
        printf("%d",(s+l));
    }else if(blank <(s+l)){
        printf("%d",blank);
    }
}