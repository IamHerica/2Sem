#include <stdio.h>
#include <math.h>
 
int main() {
 
    int n, i, total;
    
    scanf("%d", &n);
    
    if (n % 2 == 1)
        n++;

   
    for (i=2; i<=n; i+=2){
      total = pow(i, 2);
      printf("%i^2 = %d\n", i, total);
    }
 
    return 0;
}