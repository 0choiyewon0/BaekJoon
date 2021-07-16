/*
[16756번]
 In a small village besides Đakovo lives Kasap. While agriculture is his branch, love and destiny, in his free time Kasap solves tasks in competitive programming and is doing very well. Particularly interesting are the tasks involving data structures.

 On a sunny summer day, Kasap's friend Mirko sent him a letter we carry forward entirely:

 “My dear Kasap,
 I hope you tolerate well these hot summer days. I'm writing this letter because I have a problem. One friend gave me a hard task the other day that I have not managed to solve yet. Since I know that you love this sort of tasks, I would ask you for help because I do not want to embarass myself in front of my friend. In the task there is an array A consisting of N integers. You should find an interval of the minimum value. The value of the interval [L, R] is defined as the difference between the maximum and minimum value of the numbers in that interval: max(A[L], A[L+1], …, A[R]) - min(A[L], A[L+1], …, A[R]). I will remind you that we observe only the intervals in which L is strictly less than R.
 Thank you,
 Mirko”

 After a week of solving, Kasap has not yet managed to solve the task and asks you to help him.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){

    int n,a[100000] ,min;
    min =1000000000;
    
    scanf("%d" , &n);
    for(int i=0; i<n;i++){
        scanf("%d" , &a[i]);
        if(a[i-1] == a[i]){
            printf("0");
            return 0;
        }
    }
    
    min = abs(a[1]- a[0]);
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1; j<n;j++){
            int tmp = abs(a[i] -a[j]);
            if(min < tmp){
                break;
            }else if(tmp >0){
                min = tmp;
            }
            
        }
    }
    
    
    

    printf("%d",min);
    
}

