/*
[18238번]
 규칙은 이러하다.

 그림과 같은 원판에 문자들이 순서대로 적혀있다. 처음 순간에 화살표는 'A'를 가리키고 있다.
 원판은 왼쪽 또는 오른쪽으로 돌릴 수 있다. 원판을 한 칸 돌리는 데에는 1의 시간이 소요된다.
 화살표가 가리키고 있는 문자를 출력할 수 있다. 문자를 출력하는 데에 걸리는 시간은 없다.
 시간이 너무 오래 걸리면 지루해할 ZOAC의 참가자들을 위해 성우는 해당 문자열을 앞에서부터 차례대로 최대한 빠르게 출력하려고 한다.

 바쁜 성우를 위하여 해당 문자열을 출력하는 데 걸리는 시간의 최솟값을 구해보자.



 */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    char a[101];
    int result;
    result =0;
    a[0] = 'A';
    
    int i=1;
    while(scanf("%c", &a[i]) != EOF){
        if(a[i] =='\n'){
            break;
        }
        i++;
    }

    for(int k=0;k<i-1;k++){
        if(abs(a[k+1]-a[k])>12){
            result += (26-abs(a[k+1]-a[k]));
        }else{
            result += abs(a[k+1]-a[k]);
        }
    }
    printf("%d", result);
    
}

