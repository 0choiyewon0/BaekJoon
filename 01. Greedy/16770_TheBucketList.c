/*
[16770번]
 Farmer John is considering a change in how he allocates buckets for milking his cows. He thinks this will ultimately allow him to use a small number of total buckets, but he is not sure how many exactly. Please help him out!

 Farmer John has  cows (), conveniently numbered . The th cow needs to be milked from time  to time , and requires  buckets to be used during the milking process. Several cows might end up being milked at the same time; if so, they cannot use the same buckets. That is, a bucket assigned to cow 's milking cannot be used for any other cow's milking between time  and time . The bucket can be used for other cows outside this window of time, of course. To simplify his job, FJ has made sure that at any given moment in time, there is at most one cow whose milking is starting or ending (that is, the 's and 's are all distinct).

 FJ has a storage room containing buckets that are sequentially numbered with labels 1, 2, 3, and so on. In his current milking strategy, whenever some cow (say, cow ) starts milking (at time ), FJ runs to the storage room and collects the  buckets with the smallest available labels and allocates these for milking cow .

 Please determine how many total buckets FJ would need to keep in his storage room in order to milk all the cows successfully.

 */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n,buc,s,e,max,min;
    scanf("%d", &n);
    
    s=e=max=0;
    min =10000;
    int arr[1001]={ 0};
    //printf("\n\n\n==>%d \n\n\n", arr[1000]);
    
    
    for(int i=0; i<n;i++){
        scanf("%d %d %d" , &s,&e,&buc);
        for(int j=s;j<(e+1);j++){
            arr[j] += buc;
        }
        if(min>s){
            min = s;
        }
        
        if(max<e){
            max = e;
        }
    }
    
    int tmp = -1;
    for(int i=min;i<max+1;i++){
        if(tmp < arr[i]){
            tmp = arr[i];
        }
       // printf("arr[%d] = %d ==> max : %d\n",i, arr[i], tmp);
    }
    
    
    printf("%d", tmp);
}

