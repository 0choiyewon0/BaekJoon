/*
[21146번]
 Your judges are preparing a problem set, and they’re trying to evaluate a problem for inclusion in the set. Each judge rates the problem with an integer between  and , where:

  means: I really like this problem!
  means: I really don’t like this problem!
  means: Meh. I don’t care if we use this problem or not.
 The overall rating of the problem is the average of all of the judges’ ratings—that is, the sum of the ratings divided by the number of judges providing a rating.

 Some judges have already rated the problem. Compute the minimum and maximum possible overall rating that the problem can end up with after the other judges submit their ratings.

 */

#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n,k,tmp;
    double max,min;
    int a[11];
    max=min=tmp=0;
    
    scanf("%d %d", &n,&k);
    
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
        tmp += a[i];
    }
    int result = tmp;
    for(int i=k;i<n;i++){
        result += (-3);
    }
    
    for(int i=k;i<n;i++){
        tmp += (+3);
    }
    
    printf("%g %g", (double)result/n,(double)tmp/n);
    
}

