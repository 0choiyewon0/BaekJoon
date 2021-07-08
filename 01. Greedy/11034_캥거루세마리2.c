
/*
[11034번]
캥거루 세 마리가 사막에서 놀고 있다. 사막에는 수직선이 하나 있고, 캥거루는 서로 다른 한 좌표 위에 있다.
한 번 움직일 때, 바깥쪽의 두 캥거루 중 한 마리가 다른 두 캥거루 사이의 정수 좌표로 점프한다. 
한 좌표 위에 있는 캥거루가 두 마리 이상일 수는 없다.
캥거루는 최대 몇 번 움직일 수 있을까?
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a,b,c,min,mid,max;
    while(scanf("%d %d %d",&a,&b,&c) != EOF){
        
        if((a>b)&&(b>c)){
            max = a;
            mid = b;
            min = c;
        }else if((a>c)&&(c>b)){
            max = a;
            mid = c;
            min = b;
        }else if((b>a)&&(a>c)){
            max = b;
            mid = a;
            min = c;
        }else if((b>c)&&(c>a)){
            max = b;
            mid = c;
            min = a;
        }else if((c>a)&&(a>b)){
            max = c;
            mid = a;
            min = b;
        }else if((c>b)&&(b>a)){
            max = c;
            mid = b;
            min = a;
        }

        if((mid-min-1)>=(max-mid-1)){
            printf("%d\n", mid-min-1);
        }else if((mid-min-1)<(max-mid-1)){
            printf("%d\n", max-mid-1);
        }
    }
    return 0;
}