
/*
[10162번]
3개의 시간조절용 버튼 A B C가 달린 전자레인지가 있다. 
각 버튼마다 일정한 시간이 지정되어 있어 해당 버튼을 한번 누를 때마다 그 시간이 동작시간에 더해진다. 
버튼 A, B,
 C에 지정된 시간은 각각 5분, 1분, 10초이다.

냉동음식마다 전자레인지로 요리해야할 시간 T가 초단위로 표시되어 있다. 
우리는 A, B, C 3개의 버튼을 적절히 눌러서 그 시간의 합이 정확히 T초가 되도록 해야 한다. 
단 버튼 A, B, C를 누른 횟수의 합은 항상 최소가 되어야 한다. 이것을 최소버튼 조작이라고 한다. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int t,tmp,result,a,b,c;
    scanf("%d", &t);
    result =0;
    tmp = t;
    
    result += tmp/(5*60);
    a= tmp/(5*60);
    tmp -= (tmp/(5*60) * (5*60));
    
    result += tmp/(1*60);
    b= tmp/(1*60);
    tmp -= (tmp/(1*60) * (1*60));
    
    result += tmp/(10);
    c= tmp/(10);
    tmp -= (tmp/(10) * (10));

    if(tmp != 0 ){
        printf("-1");
        return 0;
    }else{
        printf("%d %d %d",a,b,c);
    }
    return 0;
}
