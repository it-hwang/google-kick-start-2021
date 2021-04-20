#include <stdio.h>

int T, N, K;
char str[200000+10];

int solve(void) {
   int changeless = 0;
   int result = K;
   
   for (int i = 1; i <= (N / 2); ++i) {
       if (str[i-1] != str[N-i]) {
           changeless++;
       }
   }
   
   result -= changeless;
   if (result < 0) {
       result *= -1;
   }
   
   return result;
}

int main(void) {
    scanf("%d", &T);
    
    for (int i = 1; i <= T; ++i) {
        scanf("%d %d", &N, &K);
        scanf("%s", str);
        
        int result = solve();
        
        printf("Case #%d: %d\n", i, result);
    }
}

