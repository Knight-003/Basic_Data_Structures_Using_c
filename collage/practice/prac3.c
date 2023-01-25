#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s=0;
    scanf("%d", &n);
    
    
    for (int i=0; i<5; i++) {
            
            if (n<10) {
                s=s+n;
                
                break;
            
            }
           s = s + (n%10); 
            n = n/10;
    }
    printf("%d",s);
    
    
    return 0;
}
